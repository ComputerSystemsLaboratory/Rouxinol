#include <iostream>
using namespace std;

int main(){
	long long int n, a = 1;

	cin >> n;
	for(int i=1 ; i<=n ; i++){
		a *= i;
	}
	cout << a << endl;
}