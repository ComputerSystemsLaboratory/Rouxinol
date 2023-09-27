#include<bits/stdc++.h>
using namespace std;
bool flg[1000000];
int main(void){
	int n;
	int i,j;
	int cnt=0;
	while(1){
		cin>>n;
		if(cin.eof())	break;
		fill(flg,flg+n+1,0);
		for(i=2;i*i<=n;i++){
			//cout<<"I="<<i<<endl;
			for(j=2;i*j<=n;j++){
				//cout<<"J="<<j<<endl;
				flg[i*j]=1;
			}
		}
		cnt=0;
		for(i=2;i<=n;i++)	if(flg[i]==0)	cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}
