#include <iostream>
#include <vector>
using namespace std;
int main(){
	bool prime[1000001];
	prime[1]=false;
	for(int i=2;i<=1000000;i++){
		prime[i]=true;
	}
	for(int i=2;i<=1000000;i++){
		if(prime[i]==true){
			for(int j=i*2;j<=1000000;j+=i){
				prime[j]=false;
			}
		}
	}
	int a,d,n;
	while(cin>>a>>d>>n){
		if(a==0 && d==0 && n==0) break;
		vector<int> p;
		for(int k=a;k<=1000000;k+=d){
			if(prime[k]==true) p.push_back(k);
		}
		cout<<p[n-1]<<endl;
	}
	return 0;
}