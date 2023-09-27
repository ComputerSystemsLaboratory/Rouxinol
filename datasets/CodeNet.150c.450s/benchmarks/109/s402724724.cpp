#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int table[90005]={};
		
		for(int i=0;i<n;i++){
			int a,b,c;
			scanf("%d:%d:%d",&a,&b,&c);
			table[c+(b*60)+(a*3600)]++;
			scanf("%d:%d:%d",&a,&b,&c);
			table[c+(b*60)+(a*3600)]--;;
			}
			
			int ans=0;
			for(int i=0;i<86401;i++){
				if(0<i)table[i]+=table[i-1];
				if(ans<table[i])ans=table[i];
				}
				cout<<ans<<endl;
		}
		return 0;
	}