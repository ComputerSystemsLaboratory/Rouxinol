#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>

using namespace std;






int main() {

	
	int nsize;
	int ksize;
	int a[100000];


	while (true) {
		cin >> nsize >> ksize;
		if (nsize == 0 && ksize == 0)break;
		for (int i = 0; i < nsize; i++) {
			cin >> a[i];
		}
		int maxval;
		int val = 0;
		for (int i = 0; i < ksize; i++) {
			val += a[i];
		}
		maxval = val;

		for (int i = ksize; i < nsize; i++) {
			val -= a[i - ksize];
			val += a[i];
			if (maxval < val) {
				maxval = val;
			}
		}
		cout << maxval << endl;
	}
	






	
	
	//system("pause");
	return 0;
}
