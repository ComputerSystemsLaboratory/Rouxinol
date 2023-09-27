#include<iostream>
using namespace std;

int main() {
	int A[4];
	int B[4];
	cin >> A[0] >> A[1] >> A[2] >> A[3];
	cin >> B[0] >> B[1] >>B[2] >> B[3];
	int a = A[0] + A[1] + A[2] + A[3];
	int b = B[0] + B[1] + B[2] + B[3];
	if (a>=b){
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}
	char c;
	cin >> c;
}