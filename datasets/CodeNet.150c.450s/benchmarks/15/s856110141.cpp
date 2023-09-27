#include <iostream>
#define loop(i,j) for(int i = 0;i < j;i++)

using namespace std;

int n,q,s[10000],t[500],r;

int main() {
	cin >> n;
	loop(i,n) cin >> s[i];
	cin >> q;
	loop(i,q) {
		cin >> t[i];
		loop(j,n) {
			if(s[j] == t[i]) {
				r++;
				break;
			}
		}
	}
	cout << r << endl;
}

