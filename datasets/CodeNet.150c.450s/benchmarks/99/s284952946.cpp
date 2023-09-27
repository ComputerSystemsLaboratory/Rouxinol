#include<iostream>
#include<string>
using namespace std;
string S[2];int k,n,x[4][10000000][2],sum,p[4]={1,10,100,1000},q[4];char T[15]="0123456789ixcm";
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>S[0]>>S[1];
		for(int h=0;h<2;h++){
			k=1;
			for(int l=0;l<S[h].size();l++){
				for(int j=0;j<14;j++){
					if(S[h][l]==T[j]){
						if(j/10){
							x[j-10][i][h]+=k;k=1;
						}
						else{
							k=j;
						}
					}
				}
			}
		}
		sum=0;
		for(int j=0;j<4;j++){sum+=(x[j][i][0]+x[j][i][1])*p[j];}
		for(int j=0;j<4;j++){q[j]=(sum/p[j])%10;}
		for(int j=3;j>=0;j--){if(q[j]>=2){cout<<q[j];}if(q[j]){cout<<T[10+j];}}cout<<endl;
	}
}