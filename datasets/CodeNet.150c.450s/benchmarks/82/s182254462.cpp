#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
#define ref goto refrain

class dice{
	public:
	int o,u,s,e,n,w;//over,under,south,east,north,west
}a;

void change(int*a,int*b,int*c,int*d){
	int temp=*a;		*a=*b;	*b=*c;	*c=*d;	*d=temp;
}

void search(int u,int s){
	while(u!=a.o){
		change(&a.u,&a.n,&a.o,&a.s);
		if(u==a.o) break;
		change(&a.u,&a.e,&a.o,&a.w);
	}
	while(s!=a.s){
		change(&a.s,&a.e,&a.n,&a.w);
	}
	cout<<a.e<<endl;
}
			
		
int main(){
	cin>>a.o>>a.s>>a.e>>a.w>>a.n>>a.u;
	int n,s,u;//s:前面、u:上面
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u>>s;
		search(u,s);
	}
	return 0;
}