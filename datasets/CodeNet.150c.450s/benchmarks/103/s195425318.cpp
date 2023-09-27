#include<bits/stdc++.h>
using namespace std;
int cnt,n,s,flg[10];
void func(int sum,int c,int j){
	int i;
//	cout<<sum<<' '<<c<<endl;
	if(c<n){
		for(i=j;i<10;i++){
			if(sum+i>s)break;
			if(flg[i]==1){	
				if(sum+i==s&&c+1==n){
//					cout<<sum<<' '<<i<<' '<<c<<endl;
					cnt++;
				}
				else if(sum+i<s&&c+1<n){
					flg[i]=0;
					func(sum+i,c+1,i+1);
					flg[i]=1;
				}
			}
		}
	}
}
int main(void){
	int i;
	while(1){
		for(i=0;i<10;i++) flg[i]=1;
		cin>>n>>s;
		if(n==0)break;
		cnt=0;
		func(0,0,0);
		cout<<cnt<<endl;
	}
	return 0;
}