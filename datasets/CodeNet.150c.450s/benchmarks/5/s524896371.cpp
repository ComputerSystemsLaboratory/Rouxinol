#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n;
	cin >> n;
	vector<long> a;
	a.resize(n);
	for (long i = 0; i < n; i++){
		cin >> a[i];
	}
	for (long i = 0; i < n; i++){
		cout << a[n - i - 1];
		if (i < n - 1){
			cout << " ";
		}
	}
	cout << endl;
}