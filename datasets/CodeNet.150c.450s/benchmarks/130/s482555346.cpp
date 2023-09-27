#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,d[100][100],e[100];cin>>i>>j;
	for(int a=0;a<i;a++)for(int b=0;b<j;b++)cin>>d[a][b];
	for(int a=0;a<j;a++)cin>>e[a];
	for(int a=0;a<i;a++){
		int sum=0;
		for(int b=0;b<j;b++)sum+=d[a][b]*e[b];
		cout<<sum<<endl;
	}
}