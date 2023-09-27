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
		char change[266]={0};
		rep(i,n){
			char a;
			char b;
			cin>>a>>b;
			change[a]=b;
		}
		
		
		int m;
		cin>>m;
		
		rep(i,m){
			char a;
			cin>>a;
			
			if(change[a]!=0){
				printf("%c",change[a]);
			}else{
				printf("%c",a);
			}
		}
		
		puts("");
	}
}