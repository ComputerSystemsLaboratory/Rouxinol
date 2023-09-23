#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n[10];
	for(int i=0;i<10;i++){
		n[i] = 0;
		cin >> n[i];
	}
	sort(n,n+10,greater<int>());
	for(int i=0;i<3;i++)
		cout << n[i] << endl;
	return 0;
}