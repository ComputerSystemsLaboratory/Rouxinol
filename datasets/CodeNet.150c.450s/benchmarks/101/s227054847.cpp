#include<iostream>    // ???????????????????§?????????£????????????
using namespace std;
#include<stdio.h>

typedef struct fox { int val; fox *prev, *next; } fox_t;

fox_t* init()
{
	fox_t* head = new fox_t;
	head->val = -1;
	head->next = NULL;
	head->prev = NULL;
	return head;
}

fox_t* make_tail(fox_t* head)
{
	fox_t* tail = new fox_t;
	tail->val = -1;
	head->next = tail;
	tail->next = NULL;
	tail->prev = head;
	return tail;
}

bool isEmpty(fox_t* head, fox_t* tail)
{
	return (head->next == tail ? true : false);
}

fox_t* b_insert(fox_t* tail, int data)
{
	fox_t* fox = new fox_t;
	fox->val = data;
	fox->prev = tail->prev;
	fox->next = tail;
	tail->prev->next = fox;
	tail->prev = fox;
	return fox;
}
// docking.
void unionfox(fox_t* head1, fox_t* tail1, fox_t* head2, fox_t* tail2)
{
	if(isEmpty(head1, tail1) || isEmpty(head2, tail2)) return;
	fox_t* fox = tail1->prev;
	fox->next = head2->next;
	head2->next->prev = fox;
	tail2->prev->next = tail1;
	tail1->prev = tail2->prev;
	delete tail2;
	delete head2;
}

int main()
{
	int color[100001];
	int c_num = 0;
	fox_t* foxhead[100001];
	fox_t* foxtail[100001];
	int i, n, m, q;
	int a, b;
	cin >> n >> m;
	for(i = 0; i <= n; i++){
		color[i] = -1;
		foxhead[i] = init();
		foxtail[i] = make_tail(foxhead[i]);
	}
	int c_a, c_b, val;

	for(i = 0; i < m; i++){
		cin >> a >> b;
		c_a = color[a];
		c_b = color[b];
		if(c_a < c_b){ swap(c_a, c_b); swap(a, b); }  // color[a] >= color[b].
		if(c_a < 0 && c_b < 0){
			color[a] = c_num; color[b] = c_num;
			b_insert(foxtail[c_num], a);
			b_insert(foxtail[c_num], b);
			c_num++;
		}else if(c_b < 0){
			color[b] = c_a;
			b_insert(foxtail[c_a], b);
		}else if(c_a == c_b){
			continue;
		}else{ // color[a] != color[b].
			fox_t* fox = foxhead[c_b]->next;
			while(fox != foxtail[c_b]){
				val = fox->val;
				color[val] = c_a;
				fox = fox->next;
			};
			unionfox(foxhead[c_a], foxtail[c_a], foxhead[c_b], foxtail[c_b]);
		}
	}
	cin >> q;
	for(i = 0; i < q; i++){
		cin >> a >> b;
		if(color[a] >= 0 && (color[a] == color[b])){
			printf("yes\n"); }else{ printf("no\n"); 
			}
	}
	return 0;
}