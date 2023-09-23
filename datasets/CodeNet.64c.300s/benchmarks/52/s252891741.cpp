#include<bits/stdc++.h>
using namespace std;

int d[15][15][200];
/*
 * d[i][j][k]:
 * i未満の数をj個使って、和をkにする通り数
*/
int main(){
	while(1){
		int n,s;
		cin>>n>>s;
		if(n==0&&s==0)break;
		memset(d,0,sizeof(d));
		d[0][0][0]=1;
		for(int i=0;i<=9;i++){
			for(int j=0;j<=n;j++){
				for(int k=0;k<=s;k++){
					//数iを使わない場合
					d[i+1][j][k]+=d[i][j][k];
					//数iを使う場合
					d[i+1][j+1][k+i]+=d[i][j][k];
				}
			}
		}
		cout<<d[10][n][s]<<endl;
	}
	return 0;
}

