#include <iostream>
using namespace std;
bool is_prime(int n){
	if(n<=1)
		return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int num=0;
	for(int i=0;i<n;i++){
		if(is_prime(a[i]))
			num++;
	}
	cout<<num<<endl;
	return 0;
}