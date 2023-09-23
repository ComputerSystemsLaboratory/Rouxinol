#include <iostream>
using namespace std;

int main(){
	int X,Y,N;//XY??´????????§?¨?N??\???????????°
	int nx[50],ny[50];//??\?????§?¨?
	int mas[20][20];//??????
	while(1){
	cin>>X>>Y;
	if(X==0&&Y==0) break;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>nx[i]>>ny[i];
	}

	for(int i=1;i<=X;i++){
		for(int j=1;j<=Y;j++){
			mas[i][j]=-1;
		}
	}
	for(int i=0;i<N;i++){
		mas[nx[i]][ny[i]]=0;
	}
	if(mas[1][1]==-1)mas[1][1]=1;
	for(int i=2;i<=X;i++){
		if(mas[i][1]==-1)mas[i][1]=mas[i-1][1];
	}
	for(int i=2;i<=Y;i++){
		if(mas[1][i]==-1)mas[1][i]=mas[1][i-1];
	}
	for(int i=2;i<=X;i++){
		for(int j=2;j<=Y;j++){
			if(mas[i][j]==-1) mas[i][j]=mas[i-1][j]+mas[i][j-1];
		}
	}
	/*
	for(int i=1;i<=X;i++){
		for(int j=1;j<=Y;j++){
			cout<<mas[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	cout<<mas[X][Y]<<endl;
	}
	return 0;
}