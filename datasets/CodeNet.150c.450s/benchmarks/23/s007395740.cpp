#include <iostream>
using namespace std;
typedef unsigned long long ULL;
int main(){
	ULL a=1,b=1,c,n;
	cin>>n;
	for (ULL i=1;i<=n;++i){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<a<<endl;
	return 0;
}