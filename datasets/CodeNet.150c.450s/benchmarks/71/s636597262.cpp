#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int ans=0;
		for(int i=0; i<=9; i++) {
			for(int j=0; j<=9; j++) {
				for(int l=0; l<=9; l++) {
					if(n-(i+j+l) <= 9 && n-(i+j+l) >= 0) ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
