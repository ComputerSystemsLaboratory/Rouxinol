#include<iostream>
#include<vector>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	long long n,k;
	while(1){
		cin>>n>>k;
		if(!n && !k)break;
		int data[n];
		long long sum[n-k+1];
		sum[0]=0;
		rep(i,n){
			cin>>data[i];
			if(i<k)sum[0]+=data[i];
		}
		rep(i,n-k){
			sum[i+1]=sum[i]+data[i+k]-data[i];
		}
		sort(sum,sum+n-k+1);
		cout<<sum[n-k]<<endl;
	}
	return 0;
}