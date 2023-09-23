#include<iostream>
using namespace std;
int main(){
	int n,b,f,r,v,y,z,a,i,j,l,k,math[4][3][10]={0},x;
	cin>>n;
	for(l=0;l<n;l++){
	cin>>x>>y>>z>>v;
	math[x-1][y-1][z-1]+=v;
	}
	for(k=0;k<4;k++){
		for(i=0;i<3;i++){
			
		for(j=0;j<10;j++){

		cout<<" "<<math[k][i][j];
		}
		cout<<endl;
		}
		if(k==3){
			break;
		}
		cout<<"####################"<<endl;
	}
return 0;
}