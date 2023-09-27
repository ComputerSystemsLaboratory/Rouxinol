#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 80000+2
struct Node{
	int le;
	int ri;
};
Node jl[MAXN];
int tot=0;
int hxq[MAXN],hxz[MAXN],hxh[MAXN];
int n;
int g;
void zg(){
	for(int i=0;i<n;++i){
		int q=0;
		if(jl[i].le==-1&&jl[i].ri==-1) continue;
		for(int j=0;j<n;++j){
			if(jl[j].le==i||jl[j].ri==i) q=1;
		}
		if(q!=1){
		    g=i;
		    return;
		}
	}
}
void input(){
	cin>>n;
	int x;
	for(int i=0;i<n;++i){
		cin>>x;
		cin>>jl[x].le>>jl[x].ri;
	}
}
void syf1(int x){
	if(jl[x].le==-1&&jl[x].ri==-1) {
		hxq[tot]=x;
		tot++;
		return;
	}
	hxq[tot]=x;
	tot++;
	if(jl[x].le!=-1) syf1(jl[x].le);
	if(jl[x].ri!=-1) syf1(jl[x].ri);
	return;
}
void syf2(int x){
	if(jl[x].le==-1&&jl[x].ri==-1){
		hxz[tot]=x;
		tot++;
		return;
	}
	if(jl[x].le!=-1) syf2(jl[x].le);
	hxz[tot]=x;
	tot++;
	if(jl[x].ri!=-1) syf2(jl[x].ri);
}
void syf3(int x){
	if(jl[x].le==-1&&jl[x].ri==-1){
		hxh[tot]=x;
		tot++;
		return;
	}
	if(jl[x].le!=-1) syf3(jl[x].le);
	if(jl[x].ri!=-1) syf3(jl[x].ri);
	hxh[tot]=x;
	tot++;
}
void output(){
	cout<<"Preorder"<<endl;
	for(int i=0;i<n;++i){
		cout<<" "<<hxq[i];
	}
	cout<<endl;
	cout<<"Inorder"<<endl;
	for(int i=0;i<n;++i){
		cout<<" "<<hxz[i];
	}
	cout<<endl;
	cout<<"Postorder"<<endl;
	for(int i=0;i<n;++i){
		cout<<" "<<hxh[i];
	}
	cout<<endl;
}
int main(){
	input();
	zg();
	//cout<<g<<endl;
	syf1(g);
	tot=0;
	syf2(g);
	tot=0;
	syf3(g);
	output();
	return 0;
}