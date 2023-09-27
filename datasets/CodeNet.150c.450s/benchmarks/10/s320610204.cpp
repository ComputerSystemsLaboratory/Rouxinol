#include<iostream>
using namespace std;
int main(){
	
	int room[4][3][10]={0},b,f,v,r,n,k,j;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		b=b-1;
		f=f-1;
		r=r-1;
		room[b][f][r]=room[b][f][r]+v;
	}
	for(j=0;j<3;j++){
		for(k=0;k<10;k++){
			cout<<" "<<room[0][j][k];
			if(k==9){
				cout<<endl;
			}
		}
	}
	cout<<"####################"<<endl;
	for(j=0;j<3;j++){
		for(k=0;k<10;k++){
			cout<<" "<<room[1][j][k];
				if(k==9){
					cout<<endl;
				}	
		}	
	}
	cout<<"####################"<<endl;
	for(j=0;j<3;j++){
		for(k=0;k<10;k++){
			cout<<" "<<room[2][j][k];
				if(k==9){
					cout<<endl;
				}
		}
	}
	cout<<"####################"<<endl;
	for(j=0;j<3;j++){
		for(k=0;k<10;k++){
			cout<<" "<<room[3][j][k];
				if(k==9){
					cout<<endl;
				}
		}
	}
	return 0;
}