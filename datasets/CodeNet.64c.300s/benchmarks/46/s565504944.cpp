#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define N_MAX (1000001)
int prime[N_MAX];
int a,d,n;

void init(){
	for(int i=0;i<N_MAX;i++)prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<N_MAX;i++){
		for(int j=2;j*i<N_MAX;j++){
			prime[j*i]=0;
		}
	}
}
void solve(){
	int cnt=0;
	for(int i=a;1;i+=d){
		if(prime[i]){
			cnt++;
			if(cnt==n){
				cout<<i<<endl;
				break;
			}
		}
	}
}
int main(){
	init();
	while(cin>>a>>d>>n&&(a||d||n)){
		solve();
	}
	return 0;
}