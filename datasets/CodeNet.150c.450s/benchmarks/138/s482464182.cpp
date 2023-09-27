#include <iostream>
using namespace std;

int main(){
	int a,b,r;
	cin >> a >> b;
	if(a<b) swap(a,b);
		while(b>0){
			r =a%b;
			a = b;
			b = r;
		}
	cout << a << endl;
	return 0;
}