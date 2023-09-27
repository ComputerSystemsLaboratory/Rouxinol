#include <iostream>
using namespace std;
int main(){
	int n,b,f,r,v;
	cin>>n;
	int ninzu[4][3][10]={0};
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		ninzu[b-1][f-1][r-1]=ninzu[b-1][f-1][r-1]+v;

	}
	for(int j=0;j<4;j++){
		for(int k=0;k<3;k++){
			for(int l=0;l<10;l++){
				cout<<" "<<ninzu[j][k][l];
				if(l==9){
					cout<<endl;
				}
				if((l==9&&k==2)&&j!=3){
				cout<<"####################"<<endl;
				}

			}
		}

	}
return 0;
}