#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main(){
    bool a[4][13];
	for(int i=0;i<4;i++)
		for(int j=0;j<13;j++)
			a[i][j]=false;
	int n,b;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c>>b;
		if(c=='S')
			a[0][b-1]=true;
		if(c=='H')
			a[1][b-1]=true;
		if(c=='C')
			a[2][b-1]=true;
		if(c=='D')
			a[3][b-1]=true;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			if(a[i][j]==false){
				if(i==0)
					cout<<"S "<<j+1<<endl;
				if(i==1)
					cout<<"H "<<j+1<<endl;
				if(i==2)
					cout<<"C "<<j+1<<endl;
				if(i==3)
					cout<<"D "<<j+1<<endl;
			}
		}
	}
	return 0;
}