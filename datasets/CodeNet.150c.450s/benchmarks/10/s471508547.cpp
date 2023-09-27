#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int a,b,c,d,i,j,k,n,x[5][4][11];
	cin>>n;
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=10;k++) x[i][j][k]=0;
		}
	}
	for(i=1;i<=n;i++){
		cin>>a>>b>>c>>d;
		x[a][b][c]=x[a][b][c]+d;
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=10;k++) cout<<" "<<x[i][j][k];
			cout<<endl;
		}
		if(i==4) break;
		cout<<"####################"<<endl;
	}
	
	
	return 0;
}

