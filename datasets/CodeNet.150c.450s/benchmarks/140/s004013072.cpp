#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace  std;
int fa[100010];
int n,m;
struct edge{
	int x,y,w;
	edge(int x=0,int y=0 ,int w=0 ):x(x),y(y),w(w){
	}
}a[100010];
int getfa(int x){
	if(x==fa[x]) return x;
	else return getfa(fa[x]);
}
bool cmp(edge a,edge b){
	return a.w<b.w;
}
int f(){
	int ans=0;
	sort(a,a+m,cmp);
	int cnt=n;
	for(int i=0;i<n;i++) fa[i]=i;
	for(int i=0;i<m;i++){
		int f1=getfa(a[i].x),
		f2=getfa(a[i].y);
		if(f1!=f2){
			ans+=a[i].w;
			cnt--;
			fa[f1]=f2;
			if(cnt==1) break;
		}
	}
	return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].w);
	}
	printf("%d\n",f());
	return 0;
}
