#include<iostream>
using namespace std;
int main(){
	int n,b,f,a[5][4][11]={0},r,v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b][f][r] = a[b][f][r]+v;
	}
	for(int i=1;i<4;i++){
		for(int j=1;j<11;j++){
			cout<<" "<<a[1][i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
		for(int i=1;i<4;i++){
		for(int j=1;j<11;j++){
			cout<<" "<<a[2][i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
		for(int i=1;i<4;i++){
		for(int j=1;j<11;j++){
			cout<<" "<<a[3][i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
		for(int i=1;i<4;i++){
		for(int j=1;j<11;j++){
			cout<<" "<<a[4][i][j];
		}
		cout<<endl;
	}
}