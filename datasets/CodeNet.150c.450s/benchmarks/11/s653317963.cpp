#include<iostream>
using namespace std;
int main(){

	int x,i,j,num;
	char a,mark[4]={'S','H','C','D'};

	bool all[4][13]={};

	cin>>x;
	for(i=0;i<x;i++){
		cin>>a>>num;
		switch(a){
		case'S':
			all[0][num-1]=true;
			break;
		case'H':
			all[1][num-1]=true;
			break;
		case'C':
			all[2][num-1]=true;
			break;
		case'D':
			all[3][num-1]=true;
			break;
		}
	}

	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(all[i][j]==false){
				cout<<mark[i]<<" "<<j+1<<endl;
			}
		}
	}

	return 0;
}