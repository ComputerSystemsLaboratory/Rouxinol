#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int a,b,c;
c=n%60;
b=n/60;
a=b/60;
b=b%60;
cout<<a<<":"<<b<<":"<<c<<endl;
	return 0;
}