#include <bits/stdc++.h>
using namespace std;
unsigned long long fact(int num){
	if(num==0) return 1;
	return num*fact(num-1);
}
int main(){
	unsigned long long n =0;
	cin>>n;
	n = fact(n);
	cout<<n<<endl;
	return 0;
}