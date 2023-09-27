#include<iostream>
using namespace std;

int main(){
	int n,b,f,r,v,aT[3][10],bT[3][10],cT[3][10],dT[3][10];
	cin>>n;
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			aT[i][j]=0;
			bT[i][j]=0;
			cT[i][j]=0;
			dT[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		switch(b){
			case 1:aT[f-1][r-1]+=v; break;
			case 2:bT[f-1][r-1]+=v; break;
			case 3:cT[f-1][r-1]+=v; break;
			case 4:dT[f-1][r-1]+=v; break;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<" "<<aT[i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<" "<<bT[i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<" "<<cT[i][j];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<" "<<dT[i][j];
		}
		cout<<endl;
	}
	return 0;
}