#include<iostream>
#include<string>
using namespace std;

int main() {
	int d,a;
	a = 0;
	while(cin >> d){
		for(int i = 0;i!=600;i+=d){
			a += i*i*d;

		}
		cout << a << endl;
		a = 0;
	}

	


	return 0;
}


