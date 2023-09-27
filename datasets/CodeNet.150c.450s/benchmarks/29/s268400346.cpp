#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
//typedef pair<int, int> P;

double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


struct Node
{
	int key;
	Node *next, *prev;
};

Node *nil;

Node* listSearch(int key)
{
	Node *cur = nil->next;
	while (cur != nil && cur->key != key)
	{
		cur = cur->next;
	}
	return cur;
}

void init()
{
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void printList()
{
	Node *cur = nil->next;
	int isf = 0;
	while (1)
	{
		if (cur == nil) break;
		if (isf++ > 0) printf(" ");
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
}

void deleteNode(Node *t)
{
	if (t == nil) return;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void deleteFirst()
{
	deleteNode(nil->next);
}

void deleteLast()
{
	deleteNode(nil->prev);
}

void deleteKey(int key)
{
	deleteNode(listSearch(key));
}

void insert(int key)
{
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}


int main()
{
	int key, n, i;
	int size = 0;
	char com[20];
	int np = 0;
	int nd = 0;
	scanf("%d", &n);
	init();
	for (i=0; i<n; i++)
	{
		scanf("%s%d", com, &key);
		if (com[0] == 'i')
		{
			insert(key);
			np++;
			size++;
		} else if (com[0] == 'd') {
			if (strlen(com) > 6)
			{
				if (com[6] == 'F') deleteFirst();
				else if (com[6] == 'L') deleteLast();
			} else {
				deleteKey(key);
				nd++;
			}
			size--;
		}
	}
	
	printList();
	
	return 0;
}


void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}


double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}