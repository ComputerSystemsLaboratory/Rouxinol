#include <iostream>

using namespace std;

int main() {

	int n, a[6]={1, 5, 10, 50, 100, 500};

	while(cin >> n) {
		if(!n) {
			break;
		}
		int t=0;
		n=1000-n;
		int i=5;
		while(i!=-1) {
			if(n>=a[i]) {
				n-=a[i];
				t++;
			}
			else {
				i--;
			}
		}

		cout << t << endl;
	}

	return 0;

}