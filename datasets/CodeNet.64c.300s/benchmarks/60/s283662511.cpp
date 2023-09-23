#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int s[17][17],a,b,n,x,y;

int main(){
	while(cin>>a>>b){
		if(a+b==0)return 0;
		for(int i=0;i<=b;i++)for(int j=0;j<=a;j++)s[i][j]=0;
		cin>>n;
		for(int i=0;i<n;i++){cin>>x>>y;s[y][x]=-1;}
		s[1][1]=1;
		for(int i=1;i<=b;i++){
			for(int j=1;j<=a;j++){
				if(s[i][j]==-1)s[i][j]++;
				else if(s[i][j]==0)s[i][j]=s[i-1][j]+s[i][j-1];
			}
		}
		cout<<s[b][a]<<endl;
	}
}