#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool prime[1000000];
	rep(i,1000000)prime[i]=true;
	prime[0]=prime[1]=false;
	for(long i=2;i<1000L;i+=1L){
		for(long j=i*2;j<1000000;j+=i){
			prime[j]=false;
		}
	}
	long n;
	while(cin>>n){
		long cnt=0;
		rep(i,n+1){
			if(prime[i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}