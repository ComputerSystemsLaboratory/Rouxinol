#include <iostream>
using namespace std;
int main(){
	int a, b;
	while(1){
		cin>>a>>b;
		if (cin.eof())
			break;
		a+=b;
		b=0;
		while(a){
			a/=10;
			b++;
		}
		cout<<b<<endl;

	}
	return 0;
}