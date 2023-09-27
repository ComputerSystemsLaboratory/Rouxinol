#include<iostream>

using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b) {
		int sum = a+b, count=1;
		while(sum>9) {
			sum =sum/10;
			count++;			
		}
		cout << count << endl;
	}
	return 0;
}