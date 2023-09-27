#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include <algorithm>


using namespace std;

int main(){
	int n;
	int max1;
	int maxS;
	int sum=0;
	int sumS=0;
	int  raw[5000];
	int ans;
	while(cin>>n,n!=0){
		sum=0;
		maxS=0;
		sumS=0;
		cin >> raw[0];
		max1=raw[0];
		sum += raw[0];
		if(sum<0)sum=0;
		for(int i=1;i<n;i++){
			cin >> raw[i];
			if(max1<raw[i]) max1 = raw[i];
			if(raw[i]<0){
				if(sumS<sum) sumS=sum;
			}
			sum += raw[i];
			if(sum<0){
				if(maxS<sum)maxS=sum;
				sum=0;
			}
		}
		if (sum==0 &&sumS==0 &&maxS==0) ans =max1;
		else ans=max(sum,max(max(sumS,max1),maxS));
		cout<<ans<<endl;
	}
	return 0;
}