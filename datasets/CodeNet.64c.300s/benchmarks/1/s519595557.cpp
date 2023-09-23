#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int p(int* a,int p,int r) {
	int x = a[r];
	int i = p-1;
	for(int j = p;j < r;j++) {
		if(a[j] <= x) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}

int main(void) {
	int n,a[100000];
	cin >> n;
	for(int i = 0;i < n;i++)cin >> a[i];
	int sep = p(a,0,n-1);
	for(int i = 0;i < n;i++) {
		if(i == sep) cout << "[";
		cout << a[i];
		if(i == sep) cout << "]";
		if(i != n-1) cout << " ";
	}
	cout << endl;
}

