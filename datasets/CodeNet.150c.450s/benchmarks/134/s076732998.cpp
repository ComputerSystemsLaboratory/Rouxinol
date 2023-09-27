#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;
const int NIL = -1;
const int MAXN = 100005;

struct Node{ int p, l, r;}T[MAXN];

void preParse(int u){
	if(u == NIL)	return;
	cout << " " << u;
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u){
	if(u == NIL)	return;
	inParse(T[u].l);
	cout << " " << u;
	inParse(T[u].r);
}

void postParse(int u){
	if(u == NIL)	return;
	postParse(T[u].l);
	postParse(T[u].r);
	cout << " " << u;
}

int main(){
	int n, p, l, r, loc;
	cin >> n;
	for(int i = 0; i < n; i++)	T[i].p = NIL;	
	for(int i = 0; i < n; i++){
		cin >> p >> l >> r;
		T[p].l = l;
		T[p].r = r;
		if(l != NIL)	T[l].p = p;
		if(r != NIL)	T[r].p = p;
	}
	for(int i = 0; i < n; i++)
		if(T[i].p == NIL)
			loc = i;
	cout << "Preorder" << endl;
	preParse(loc);
	cout << endl;
	cout << "Inorder" << endl;
	inParse(loc);
	cout << endl;
	cout << "Postorder" << endl;
	postParse(loc);
	cout << endl;
	return 0;
}