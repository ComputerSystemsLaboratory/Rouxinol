#include<iostream>
using namespace std;

int main(){
	int a[3][11][21];
	int n=0;
	int m=0;
	int y[10000][3];
	for(int i=997;i<1000;i++){
		for(int j=1;j<11;j++){
			if(j%2==0 && i%3>0){
				for(int k=1;k<20;k++){
					n++;
					a[i-997][j][k] = n;
				}
			}
			else{
				for(int k=1;k<21;k++){
					n++;
					a[i-997][j][k] = n;
				}
			}
		}
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>y[i][0]>>y[i][1]>>y[i][2];
		cout<<(999-y[i][0])/3*590+591-a[(y[i][0]-1)%3][y[i][1]][y[i][2]]<<endl;
	}
	return 0;
}