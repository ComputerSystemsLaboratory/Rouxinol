#include<iostream>
using namespace std;
#define MAX 30
#define NIL -1

struct Node{int p,l,r;};
Node T[MAX];

void preParse(int u){
	if(u==NIL)return;
	cout << " " << u;
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u){
	if(u==NIL)return;
	inParse(T[u].l);
	cout << " " << u;
	inParse(T[u].r);
}
void postParse(int u){
	if(u==NIL)return;
	postParse(T[u].l);
	postParse(T[u].r);
	cout << " " << u;
}


int main(){
	int r,l,a,n;
	cin >> n;
	for(int j=0;j<n;j++)T[j].p=NIL;
	for(int s=0;s<n;s++){
		cin >> a >> l >> r;
		T[a].l = l;T[a].r = r;
		if(l!=NIL)T[l].p = a;
		if(r!=NIL)T[r].p = a;
	}
	for(int j=0;j<n;j++){
		if(T[j].p == NIL) r=j;
	}

	cout << "Preorder" << endl;
	preParse(r);
	cout << endl << "Inorder" << endl;
	inParse(r);
	cout << endl << "Postorder" << endl;
	postParse(r);
	cout << endl;

	return 0;
}

