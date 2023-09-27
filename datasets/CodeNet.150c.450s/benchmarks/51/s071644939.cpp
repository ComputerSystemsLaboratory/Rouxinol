#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	
	int A[30] = {};
	
	int a;
	for(int i=0;i<28;i++) {
	cin >> a;
	A[a-1]++;
}
	for(int i=0;i<30;i++)
	if( A[i] == 0)
	cout << i+1 << "\n";

	return 0;
}
