#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	
	int a,b;

	while(1){
		bool FF[25][25];
		cin>>a>>b;if(a==b&&a==0)break;
		for(int i=1;i<=20;i++)
		for(int j=1;j<=20;j++)
			FF[i][j]=false;
	int N[20][20]={};
	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
		FF[x][y]=true;
	}
	N[1][1]=1;
	for(int i=1;i<=b;i++)
		for(int j=1;j<=a;j++)
		{
			if(FF[j][i]!=true){
				N[j][i+1]+=N[j][i];
				N[j+1][i]+=N[j][i];
			}
		}
	cout<<N[a][b]<<endl;
	}
	return 0;
}