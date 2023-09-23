#include<iostream>

using namespace std;

void sort(int a[]) {
	for (int i=0; i<3; i++) {
		for (int j=i+1; j<3; j++) {
			if (a[i]>a[j]) {
				int dummy = a[i];
				a[i] = a[j];
				a[j] = dummy;
			}
		}
	}
}

int main() {
	int a[3];
	for (int i=0; i<3; i++) cin >> a[i];
	sort(a);

	for (int i=0; i<3; i++) {
		cout << a[i];
			if (2 != i) cout << " " ;
	}

	cout << endl;
	
	return 0;
}