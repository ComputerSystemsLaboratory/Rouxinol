#include<iostream>
using namespace std;
#include<stdio.h>

typedef struct box { int val; box *prev, *next; } box_t;

box_t* init()
{
    box_t* head = new box_t;
    head->val = -1;
    head->next = NULL;
    head->prev = NULL;
    return head;
}

box_t* make_tail(box_t* head)
{
    box_t* tail = new box_t;
    tail->val = -1;
    head->next = tail;
    tail->next = NULL;
    tail->prev = head;
    return tail;
}

bool isEmpty(box_t* head, box_t* tail)
{
    return (head->next == tail ? true : false);
}

box_t* f_insert(box_t* head, int data)
{
    box_t* box = new box_t;
    box->val = data;
    box->next = head->next;
    box->prev = head;
    head->next->prev = box;
    head->next = box;
    return box;
}

int b_pop(box_t* tail)
{
    if(!(tail->prev->prev)) return -1;
    box_t* box = tail->prev;
    int val;
    val = tail->prev->val;
    tail->prev = box->prev;
    box->prev->next = tail;
    delete box;
    return val;
}

int main()
{
    int G[101][102];
    int dist[101];

    box_t* head = init();
    box_t* tail = make_tail(head);

    int n, i, j, a, b, e, v1, v2;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 0; j <= n + 1; j++){ G[i][j] = 0; } }

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &e);
		G[i][0] = e;  // number of edge.
        for(j = 1; j <= e; j++){
            scanf("%d", &b); G[a][j] = b; } }  // adjacent representation.

    for(i = 1; i <= n; i++) dist[i] = -1;
    f_insert(head, 1);
    dist[1] = 0;

    while(1){
        v1 = b_pop(tail);
		e = G[v1][0];
        for(i = 1; i <= e; i++){
            v2 = G[v1][i];
            if(dist[v2] < 0){
                dist[v2] = dist[v1] + 1;
                f_insert(head, v2);
            }
        }
        if(isEmpty(head, tail)) break;
    };

    for(i = 1; i <= n; i++){ printf("%d %d\n", i, dist[i]); }

    return 0;
}