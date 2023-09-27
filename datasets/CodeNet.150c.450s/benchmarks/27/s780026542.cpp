#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	int left;
	int right;
};

void insert(struct node*, int, int);
void print1(struct node*, int);
void print2(struct node*, int);

int main()
{
	char s[10];
	struct node *t;
	int m;
	int a;

	scanf("%d", &m);
	t=(struct node*)malloc(sizeof(struct node)*m);

	int count=0;
	for(int i=0; i<m; i++){
		scanf("%s", &s);
		if(s[0]=='i'){ scanf("%d", &a); insert(t, count, a); count++; }
		if(s[0]=='p'){
			if(count>0) print1(t, 0);
			printf("\n");
			if(count>0) print2(t, 0);
			printf("\n");
		}
	}
	
	return 0;

}

void print1(struct node *t, int p)
{
	if(t[p].left>=0) print1(t, t[p].left);
	printf(" %d", t[p].key);
	if(t[p].right>=0) print1(t, t[p].right);
}

void print2(struct node *t, int p)
{
	printf(" %d", t[p].key);
	if(t[p].left>=0) print2(t, t[p].left);
	if(t[p].right>=0) print2(t, t[p].right);
}

void insert(struct node *t, int count, int z)
{
	int x=0, y;
	if(count<1) x=-1;

	t[count].key = z;
	t[count].left = -1;
	t[count].right= -1;

	while(x>=0){
		y = x; // ???????¨????
		if(z < t[x].key)
			x = t[x].left; // ?????????????§????
		else 
			x = t[x].right; // ?????????????§????
	}

	if(count<1){}
	else if(z < t[y].key){
		t[y].left = count; // z ??? y ?????????????????????
	}
	else {
		t[y].right = count; // z ??? y ?????????????????????
	}
}