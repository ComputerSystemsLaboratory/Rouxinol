#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
int a[100005];
int check(long long p){
	int i=0;
	for(int j=0;j<k;j++){
		long long b=0;
		while(b+a[i]<=p){
			b+=a[i];
			i++;
			if(i==n){
				return n;
			}
		}
	}
	return i;
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long min=0;
	long long max=100000*10000;
	long long mid;
	while(max-min>1){
		mid=(min+max)/2;
		if(check(mid)>=n){
			max=mid;
		}else{
			min=mid;
		}
	}
	cout<<max<<endl;
}