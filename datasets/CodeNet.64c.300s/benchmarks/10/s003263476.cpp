#include <iostream>
using namespace std;

int main(){
	int a, b;
	while (cin >> a >> b){
		if (a != 0 || b != 0){
			if (a > b){
				cout << b << " " << a << endl;
			}
			else {
				cout << a << " " << b << endl;
			}
		}
		else {
			break;
		}
	}
	return 0;
}