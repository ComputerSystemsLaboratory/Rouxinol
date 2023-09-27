#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool prime[1000000];
	rep(i,1000000)prime[i]=true;
	prime[0]=prime[1]=false;
	loop(i,2,1000){
		for(int j=i*2;j<1000000;j+=i){
			prime[j]=false;
		}
	}
	int n;
	while(cin>>n){
		int cnt=0;
		rep(i,n+1){
			if(prime[i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}