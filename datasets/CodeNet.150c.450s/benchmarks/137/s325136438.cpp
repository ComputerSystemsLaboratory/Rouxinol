#include<iostream>
#include<cstdio>

#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 40000000+2
bool pd[MAXN];
int n;
int l[10];
char a[10000];
char b[10000];
void input(){
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%s%s", a, b);
		int g=0;
		if(a[0]=='i'){
			for(int j=0;j<strlen(b);++j){
				if(b[j]=='A') g=g*4+1;
				if(b[j]=='C') g=g*4+2;
				if(b[j]=='G') g=g*4+3;
				if(b[j]=='T') g=g*4+4;
			}
			pd[g]=1;
		}
		else{
			for(int j=0;j<strlen(b);++j){
				if(b[j]=='A') g=g*4+1;
				if(b[j]=='C') g=g*4+2;
				if(b[j]=='G') g=g*4+3;
				if(b[j]=='T') g=g*4+4;
			}
			if(pd[g]==1) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
}
int main(){
	input();
	return 0;
}