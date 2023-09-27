#include "bits/stdc++.h"
using namespace std;
int main() {
	int n=0,a=0,b=0;
	int sum=0;
	string A,B;
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>A>>B;
		if(A==B){
			a++;b++;
		}else if(A<B){
			b+=3;
		}else{
			a+=3;
		}
	}
	cout<<a<<" "<<b<<endl;
}