#include <iostream>
#include <cmath>
using namespace std;
inline bool is_prime(int n){
	if (n<=1) return false;
	int m=(int)(floor(sqrt(n)+0.5));
	for (int i=2;i<=m;++i){
		if (n%i==0) return false;
	}
	return true;
}
int main(){
	int x,count=0,m;
	cin>>x;
	for (int i=1;i<=x;++i){
		cin>>m;
		if (m<=1) ;
		else if (is_prime(m)) ++count;
	}
	cout<<count<<endl;
	return 0; 
}