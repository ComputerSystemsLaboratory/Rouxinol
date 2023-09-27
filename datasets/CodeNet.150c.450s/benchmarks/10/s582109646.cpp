#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int v[120]; // how many people live in
	for(int i=0;i<120;i++){
		v[i] = 0;
	}
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		int b, f, r, m;
		cin >> b >> f >> r >> m;
		v[(b-1)*30 + (f-1) * 10 + r - 1] += m;
	}
	for(int i=0;i<120;i++) {
		if(i%10 == 9) {
			cout << " " << v[i] << endl;
		} else {
			cout << " " << v[i];
		}
 
		if(i%30 == 29 && i/30 != 3) {
			cout << "####################" << endl;
		}
	}
 
	return 0;
}