#include<iostream>
#include<string.h>
using namespace std;
long long a[5][4][11];
int main(){
	int i,j,z;
	int n,b,f,r,v;
	memset(a,0,sizeof(a));
	cin>>n;
	for(i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b][f][r]+=v;
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			for(z=1;z<=10;z++){
				cout<<" "<<a[i][j][z];
			}
			cout<<endl;
		}
		if(i==4)break;
		cout<<"####################"<<endl;
	}
	return 0;
}