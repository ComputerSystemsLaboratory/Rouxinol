#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i;
	long int av=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		av += a[i];
	}
	sort(a,a + n);
	cout << a[0] << " " << a[n-1] << " " << av << endl;
	return 0;
}