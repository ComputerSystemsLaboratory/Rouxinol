#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n){
	if (n<=1) return false;
	int m=int(floor(sqrt(n)+0.5));
	for (int i=2;i<=m;++i){
		if (n%i==0) return false;
	}
	return true;
}
int main(){
	int n,x,count=0;
	cin>>n;
	for (int i=1;i<=n;++i){
		cin>>x;
		if (is_prime(x)) ++count; 
	}
	cout<<count<<endl;
	return 0;
}