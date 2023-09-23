#include <iostream>
using namespace std;

int main() {
	int a,b,n,i,x,y;
	while(1){
	a = 0;
	b = 0;
	cin >> n;
	if(n == 0)break;
	for(i=0;i<n;i++){
		cin >> x >> y;
		if(x < y){
			b += x + y;
		}
		else if(x == y){
			a += x;
			b += y;
		}
		else {
			a += x + y;
		}
	}
	cout << a << " " << b << endl;
	}
	return 0;
}