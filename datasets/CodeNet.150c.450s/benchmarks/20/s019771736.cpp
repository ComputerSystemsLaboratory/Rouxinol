#include<iostream>
using namespace std;

int main(){
	int S;

	cin >> S;

	int h = S / 3600;
	int temp = S % 3600;
	int m = temp / 60;
	int s = temp % 60;

	cout << h << ':' << m << ':' << s << endl;

	return 0;
}