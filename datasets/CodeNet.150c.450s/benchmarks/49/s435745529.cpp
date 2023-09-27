#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, s, j[1000], minj, maxj;
	
	while(cin >> n, n){
		s = 0;
		minj = maxj = 0;
		for(int i = 0; i < n; i++){
			cin >> j[i];
			s += j[i];
			if(i != 0) minj = min(minj, j[i]); else minj=j[0];
			if(i != 0) maxj = max(maxj, j[i]); else maxj=j[0];
		}
		s = (s - maxj - minj)/(n-2);
		cout << s << endl;
	}
	return 0;
}