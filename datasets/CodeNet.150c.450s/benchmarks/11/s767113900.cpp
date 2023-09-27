#include<iostream>
using namespace std;

int main(){
	char mark;
	int i,j,n;

	cin >> n;
	int a[4][13]={0};

	for(i=0;i<n;i++){
		cin >> mark >> j;
		switch(mark){
			case'S':a[0][j-1]=1;break;
			case'H':a[1][j-1]=1;break;
			case'C':a[2][j-1]=1;break;
			case'D':a[3][j-1]=1;break;
		}
	}

	for(i=0;i<4;i++){
		for(j=1;j<14;j++){
			if(a[i][j-1]==0){
				if(i==0)cout <<"S "<<j<<endl;
				if(i==1)cout <<"H "<<j<<endl;
				if(i==2)cout <<"C "<<j<<endl;
				if(i==3)cout <<"D "<<j<<endl;
			}
		}
	}
}