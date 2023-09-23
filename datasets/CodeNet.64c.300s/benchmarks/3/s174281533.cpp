#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i=0; i<n;i++){
			cin >> a[i];
	}
	reverse(a, a + n);

	for(int j=0 ;j<n-1;j++){
		cout << a[j] << " ";
	}
	cout << a[n-1]<< "\n";
	delete[] a;
}