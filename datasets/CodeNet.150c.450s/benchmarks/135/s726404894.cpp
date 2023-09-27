#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n[2000000][2],r[2000],c[2000],H,W,R,K,LEFT,RIGHT,MID,S;
int main(){
	while(true){r[0]=0;c[0]=0;S=0;memset(n,0,sizeof(n));
	cin>>H>>W;if(H==0 && W==0){break;}
	for(int i=1;i<=H;i++){cin>>R;r[i]=r[i-1]+R;}
	for(int i=1;i<=W;i++){cin>>R;c[i]=c[i-1]+R;}
	for(int i=0;i<=H;i++){for(int j=i+1;j<=H;j++){n[r[j]-r[i]][0]++;}}
	for(int i=0;i<=W;i++){for(int j=i+1;j<=W;j++){n[c[j]-c[i]][1]++;}}
	for(int i=1;i<2000000;i++){S+=n[i][0]*n[i][1];}
	cout<<S<<endl;}
}