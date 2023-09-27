#include <iostream>
using namespace std;

//0019
int main(){
	long long int x, f;

	cin >> x;
	f=x;
	while(--x){
		f*=x;
	}
	cout << f <<endl;
	return 0;
}