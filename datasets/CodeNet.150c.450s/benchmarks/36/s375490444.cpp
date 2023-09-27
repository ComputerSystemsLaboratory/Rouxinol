#include <iostream>
using namespace std;

int main(){
	int n,x,i,a;
	while(cin >> n){
		a = 0;
		x = 600 / n;
		for(i = 1;i < x;++i){
			a += n * (n * i * n * i);
		}
		cout << a << endl;
	}
	return 0;
}