#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int q;
	scanf(" %d", &q);
	for(int i=0; i<q; ++i){
		string a, b;
		cin >> a >> b;
		
		int m=a.size(), n=b.size();
		
		string x=" "+a;
		string y=" "+b;
		
		int c[1001][1001]={0};
		for(int i=1; i<=m; ++i) c[i][0]=0;
		for(int i=1; i<=n; ++i) c[0][n]=0;
		
		int ans=0;
		for(int i=1; i<=m; ++i){
			for(int j=1; j<=n; ++j){
				if(x[i]==y[j]) c[i][j]=c[i-1][j-1]+1;
				else c[i][j]=max(c[i][j-1], c[i-1][j]);
				
				ans=max(ans,c[i][j]);		
			}
		}
		
		printf("%d\n", ans);
	}
}