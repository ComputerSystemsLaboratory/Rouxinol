#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn=10000000;
bool is_prime[maxn];
int solve(int n){
	for(int i=0;i<=n;i++)is_prime[i]=true;
	int ans=0;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			ans++;
			for(int j=i*2;j<=n;j+=i)is_prime[j]=false;
		}
	}
	return ans;
}


int main(){
	int n;
	while(cin>>n){
		cout<<solve(n)<<endl;
	}
	return 0;
}