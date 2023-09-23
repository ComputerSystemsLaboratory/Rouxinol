#include <iostream>
using namespace std;
int main(){

	int a;
	int b;
	int c;

	int n;
	cin >> n;

	for(int i=1; i<=n; i++){

		cin >> a >> b >> c;

		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){

			cout << "YES\n";

		}
		else {
			cout << "NO" << endl;
		}
	}
}