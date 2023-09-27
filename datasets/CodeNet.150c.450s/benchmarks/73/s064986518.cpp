#include<bits/stdc++.h>
#define MAX (1<<17)
using namespace std;
int n,q;
int data[MAX*2];
void Segtree(){
	int tmp=1;
	while(tmp<n)tmp*=2;
	n=tmp;
	for(int i=0;i<n*2-1;i++)data[i]=0;
}
void update(int k,int x){
	k+=n-1;
	data[k]+=x;
	while(k>0){
		k=(k-1)/2;
		data[k]+=x;
	}
}
int find(int a,int b,int k,int l,int r){
	if(r<=a || b<=l)return 0;
	if(a<=l && r<=b)return data[k];
	int v1=find(a,b,k*2+1,l,(l+r)/2);
	int v2=find(a,b,k*2+2,(l+r)/2,r);
	return v1+v2;
}
int main(){
	int c,x,y;
	cin>>n>>q;
	Segtree();
	for(int i=0;i<q;i++){
		scanf("%d%d%d",&c,&x,&y);
		if(c)cout<<find(x-1,y,0,0,n)<<endl;
		else update(x-1,y);
	}
}