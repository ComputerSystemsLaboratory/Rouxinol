#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i,i2,m,qx,qy,X,Y,a[17][17],dp[17][17];
	cin>>X>>Y;
	while(X!=0||Y!=0){
		for(i=1;i<=Y;i++){
			for(i2=1;i2<=X;i2++){
				a[i2][i]=0;
				dp[i2][i]=0;
			}
		}
		dp[1][1]=1;
		cin>>m;
		for(i=1;i<=m;i++){
			cin>>qx>>qy;
			a[qx][qy]=1;
		}
		for(i=1;i<=Y;i++){
			for(i2=1;i2<=X;i2++){
				if(a[i2][i]==0){
					if(i2+1<=X&&a[i2+1][i]==0){
						dp[i2+1][i]+=dp[i2][i];
					}
					if(i+1<=Y&&a[i2][i+1]==0){
						dp[i2][i+1]+=dp[i2][i];
					}
				}
			}
		}
		/*for(i=1;i<=Y;i++){
			for(i2=1;i2<=X;i2++){
				cout<<dp[i2][i]<<' ';
			}
			cout<<endl;
		}*/
		cout<<dp[X][Y]<<endl;
		cin>>X>>Y;
	}
}