#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int *Tree = new int[n+1]; 
	for (int i=1;i<=n;i++) {
		cin >> Tree[i];
	}
	
	for (int i=1;i<=n;i++) {
		cout << "node " << i << ": key = " << Tree[i];
		if (i / 2 > 0) {
			cout << ", parent key = " << Tree[i/2];
		}
		if (2 * i <= n ) {
		   cout <<", left key = " << Tree[2*i];
	    } 
	    if (2 * i + 1 <= n) {
	    	cout << ", right key = " << Tree[2*i+1];
		}
		cout <<  ", " << endl;
	}
	delete[] Tree;
	return 0;
	
}
