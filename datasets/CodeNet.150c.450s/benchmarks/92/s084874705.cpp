#include <iostream>
#include <string>
using namespace std;


int main(){
	int a, b;
	while (cin >> a >> b){

		int sum = a+b;
		string su = to_string(sum);
		cout << su.size() << endl;
	}


	return 0;
}