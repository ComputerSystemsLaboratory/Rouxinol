#include<bits/stdc++.h>

using namespace std;
#define fordebug int hoge;cin>>hoge;
#define DEKAI 1000000007
#define INF (1<<28)
#define lp(i,n) for(int i=0;i<n;i++)
#define lps(i,j,n) for(int i=j;i<n;i++)
#define floot10 cout<<fixed<<setprecision(10);
#define int long long

typedef struct{
	int parent;
	int right;
	int left;
} node2;

node2 t[50];

void Preorder(int now){
	cout<<" "<<now;
	if(t[now].left!=-1)Preorder(t[now].left);
	if(t[now].right!=-1)Preorder(t[now].right);
	return;
}
void Inorder(int now){
	if(t[now].left!=-1)Inorder(t[now].left);
	cout<<" "<<now;
	if(t[now].right!=-1)Inorder(t[now].right);
	return;
}
void Postorder(int now){
	if(t[now].left!=-1)Postorder(t[now].left);
	if(t[now].right!=-1)Postorder(t[now].right);
	cout<<" "<<now;
	return;
}
signed main(){
	int n;
	cin>>n;
	lp(i,50){
		t[i].parent=-1;
	}	
	lp(i,n){
		int id;
		cin>>id;
		int r,l;
		cin>>l>>r;
		t[id].right=r;
		t[id].left=l;
		t[r].parent=id;
		t[l].parent=id;
	}
	queue<int> q;
	int now=0;
	while(1){
		if(t[now].parent==-1) break;
		now=t[now].parent;
	}
	cout<<"Preorder"<<endl;
	Preorder(now);
	cout<<endl<<"Inorder"<<endl;
	Inorder(now);
	cout<<endl<<"Postorder"<<endl;
	Postorder(now);
	cout<<endl;
	return 0;
}

