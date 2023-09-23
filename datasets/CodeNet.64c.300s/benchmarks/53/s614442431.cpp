#include <iostream>
using namespace std;

int main() {
	int a,b,c,cnt=0;
	cin>>a>>b>>c;
	for(;a<=b;a++) {
		if(!(c%a)) {
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}