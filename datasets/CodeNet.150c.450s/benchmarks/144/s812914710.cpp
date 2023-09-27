//ITP1_7_D
#include<iostream>
using namespace std;

int main()
{
	int n,m,l,i,j,k;
	cin>>n>>m>>l;
	
	int Anm[101][101]={},Bml[101][101]={};
	long Cnl[101][101]={};
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			cin>>Anm[i][k];
		}
	}
	for(k=0;k<m;k++){
		for(j=0;j<l;j++){
			cin>>Bml[k][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				Cnl[i][j]+=Anm[i][k]*Bml[k][j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0,k=0;j<l;j++,k++){
			if(k!=0){
				cout<<" ";
			}
			cout<<Cnl[i][j];
		}
		cout<<endl;
	}
	
		
	return 0;
}