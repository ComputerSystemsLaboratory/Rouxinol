#include<bits/stdc++.h>
using namespace std;
int cnt,n,s;
void func(int sum,int c,int j){
	int i;
	if(c<n){
		for(i=j;i<10;i++){
			if(sum+i>s)break;
			if(sum+i==s&&c+1==n) cnt++;
			else if(sum+i<s&&c+1<n)	func(sum+i,c+1,i+1);
		}
	}
}
int main(void){
	int i;
	while(1){
		cin>>n>>s;
		if(n==0)break;
		cnt=0;
		func(0,0,0);
		cout<<cnt<<endl;
	}
	return 0;
}