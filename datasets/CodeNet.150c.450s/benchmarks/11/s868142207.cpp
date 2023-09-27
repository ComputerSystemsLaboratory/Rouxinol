#include<iostream>
#include<string>
using namespace std;

int main(){
	int i,j,n,num;
	char m;
	int a[4][13]={0};
	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m>>num;
		if(m=='S')
			a[0][num-1]=1;
		if(m=='H')
			a[1][num-1]=1;
		if(m=='C')
			a[2][num-1]=1;
		if(m=='D')
			a[3][num-1]=1;
	}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(a[i][j]==0 && i==0)
				cout<<"S"<<" "<<j+1<<endl;
			if(a[i][j]==0 && i==1)
				cout<<"H"<<" "<<j+1<<endl;
		        if(a[i][j]==0 && i==2)
				cout<<"C"<<" "<<j+1<<endl;	
			if(a[i][j]==0 && i==3)
				cout<<"D"<<" "<<j+1<<endl;
		}
	}
											
}
		
		
	