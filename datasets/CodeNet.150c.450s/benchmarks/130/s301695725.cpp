#include<bits/stdc++.h>
using namespace std;

int x[101][101]={};
int y[101]={};

int main(){
	int a,b;
	cin>>a>>b;
	for (int i=0;i<a;i++)for (int j=0;j<b;j++)cin>>x[i][j];
	for (int i=0;i<b;i++)cin>>y[i];
	for (int i=0;i<a;i++){
		int ans=0;
		for (int j=0;j<b;j++){
			ans+=x[i][j]*y[j];
		}
		cout<<ans<<endl;
	}	
}
