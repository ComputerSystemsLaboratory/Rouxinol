#include <iostream>
using namespace std;

int main() {
	int a,b;
	while(cin>>a>>b){
	int gcd=a,lcm=b,sto;;
	while(lcm!=0)
	{
		sto=lcm;
		lcm=gcd%lcm;
		gcd=sto;
	}
	cout<<gcd<<" "<<(a/gcd)*b<<endl;}
	return 0;
}