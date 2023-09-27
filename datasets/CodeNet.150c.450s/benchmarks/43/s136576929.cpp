#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<string>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int main(){
	while(1){
	int n;
	scanf("%d",&n);
	if(n==0)break;
	int a=0,b=0;
	rep(i,n){
		int f,g;
		scanf("%d%d",&f,&g);
		
		if(f<g){
			a+=f+g;
		}
		if(f>g){
			b+=f+g;
		}
		if(f==g){
			a+=f;
			b+=g;
		}
	}
	printf("%d %d\n",b,a);
	}
}