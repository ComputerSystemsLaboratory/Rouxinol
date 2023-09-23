#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int prime[123457*2];
bool is_prime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return n!=1;
}
int main(){
	int a,d,n,ans;
	while(cin>>a>>d>>n,a,d,n){
		int cnt=0;
		while(1){
			if(is_prime(a))cnt++;
			if(cnt==n){
				ans=a;
				break;
			}
			a+=d;
		}
		cout<<ans<<endl;
	}
}