#include<iostream>
using namespace std;
int main(){
	int n,b,f,r,v,p[4][3][10]={0},i,j,k,d,c;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		p[b-1][f-1][r-1]+=v;
	}
	for(j=0;j<4;j++){
		for(k=0;k<3;k++){
			for(d=0;d<10;d++){
				cout<<" "<<p[j][k][d];
			}
			cout<<endl;
		}
		if(j<3){
			cout<<"####################"<<endl;
		}
	}
	
	return 0;
}