#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
	int a,suzi,X[4][14]={{}};
	char moyo;
	cin >> a;
	while(a--){
		cin>>moyo>>suzi;
		switch(moyo){
		case 'S':X[0][suzi]=1;break;
		case 'H':X[1][suzi]=1;break;
		case 'C':X[2][suzi]=1;break;
		case 'D':X[3][suzi]=1;break;
		}
	}
	for(int s=0;s<4;s++){
		for(int y=1;y<14;y++){
			if(X[s][y]==0){
				switch(s){
				case 0:cout<<"S "<< y <<endl;	break;
				case 1:cout<<"H "<< y <<endl;	break;
				case 2:cout<<"C "<< y <<endl;	break;
				case 3:cout<<"D "<< y <<endl;	break;
				}
			}
		}
	}
return 0;
}