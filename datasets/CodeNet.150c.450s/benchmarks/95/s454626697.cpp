#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	while(1){
		int n;
		string f[100];		
		int left=0, right=0; //両足とも床に有る
		int ans=0;
		
		scanf(" %d", &n);
		if(n==0) break;
		for(int i=0; i<n; ++i) cin >> f[i];
		
		int now=0;
		n-=n%2;
		while(now<n){
			if(left==0 && right==0){
				if( (f[now]=="lu" && f[now+1]=="ru") || (f[now+1]=="lu" && f[now]=="ru") ){ 
					left=1;
					right=1;
					ans++;
				}
			}
			else if(left==1 && right==1){
				if( (f[now]=="ld" && f[now+1]=="rd") || (f[now+1]=="ld" && f[now]=="rd") ){ 
					left=0;
					right=0;
					ans++;
				}
			}
			
			now+=2;
		}
		
		printf("%d\n", ans);
	}
	return 0;
}