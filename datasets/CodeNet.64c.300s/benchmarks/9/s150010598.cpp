#include<iostream>
using namespace std;
int main(){
	int a,n,x;
	a=100000;
	cin >> n;
	for(x=0;x<n;x++){
		a+=a/20;
		a+=999;
		a/=1000;
		a*=1000;
	}
	cout << a << endl;
	return 0;
}