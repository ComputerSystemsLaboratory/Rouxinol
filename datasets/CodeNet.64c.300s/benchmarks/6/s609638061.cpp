#include<iostream>
using namespace std;
int main(){
	int n,b,f,r,v,a[4][3][14]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b-1][f-1][r-1]=a[b-1][f-1][r-1]+v;
	}
	for(int k=0;k<4;k++){
		for(int j=0;j<3;j++){
			for(int s=0;s<10;s++){
				cout<<" "<<a[k][j][s];
			}
		cout<<endl;
		}
		if(k==0||k==1||k==2){cout<<"####################"<<endl;}

	}
	return 0;
}
