#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
#define __int64 long long
int ta[100001];
__int64 n,k;
__int64 ok(__int64 x){
	__int64 cnt=1,now=0;
	int i=0;
	while(i<n){
	if(now+ta[i]<=x)now+=ta[i],i++;
	else now=0,cnt++;//オーバー
	if(cnt>k)return i;
	}
	if(cnt<=k)return n;
	else return 0;
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)scanf("%d",&ta[i]);
	__int64 a=0,b=20000000000000000,mid=0;
	for(int i=0;i<3000;i++){
	//cout<<a<<" "<<b<<" "<<mid<<endl;
	mid=(a+b)/2;
	int bi=ok(mid);
	if(bi<n)a=mid;//鋼板
	else if(bi>=n)b=mid;//前半
	}
	cout<<b<<endl;
	return 0;
}