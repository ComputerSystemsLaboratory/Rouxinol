#include<iostream>
using namespace std;
int main(){
	int r,c,hyou[101][101]={};
	cin>>r>>c;
	for(int a = 0;a < r;a++){
		for(int b = 0;b < c;b++){
			cin>>hyou[a][b];
		}

	}
	for(int a = 0;a <= r;a++){
		for(int b = 0;b < c;b++){
			cout<<hyou[a][b]<<" ";
			hyou[a][c]=hyou[a][c]+hyou[a][b];
			hyou[r][b]=hyou[r][b]+hyou[a][b];
		}
		cout<<hyou[a][c]<<endl;
	}
	return 0;
}
