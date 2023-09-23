#include <iostream>
using namespace std;

int prime[1000010];
bool is_prime[1000010];

void seive(int n){
	int p=0;
	for(int i=0;i<=n;i++) is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++]=i;
			for(int j=2*i;j<=n;j+=i)
			is_prime[j]=false;
		}
	}
}
	
int main() {
	int n;
	
	seive(999999);
	
	while(cin>>n){
		int sum=0;
		
		for(int i=0;i<=n;i++)
		if(is_prime[i])
		sum++;
		
		cout<<sum<<endl;
	}
	return 0;
}