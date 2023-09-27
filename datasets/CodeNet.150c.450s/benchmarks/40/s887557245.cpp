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
	void change(char a);
};
void dice::change(char a){
	int tem=o;
	if(a=='S'){
		o=n;	n=u;	u=s;	s=tem;
	}
	else if(a=='E'){
		o=w;	w=u;	u=e;	e=tem;
	}
	else if(a=='N'){
		o=s;	s=u;	u=n;	n=tem;
	}
	else if(a=='W'){
		o=e;	e=u;	u=w;	w=tem;
	}
	else{
		cout<<"Error!"<<endl;
		exit(0);
	}
}
		

int main(){
	dice a;
	cin>>a.o>>a.s>>a.e>>a.w>>a.n>>a.u;
	char com[100];
	cin>>com;
	int m=strlen(com);
	for(int i=0;i<m;i++){
		a.change(com[i]);
	}
	cout<<a.o<<endl;
	return 0;
}