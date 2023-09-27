#include<iostream>
using namespace std;

int main(){

	int n, t, ans;

	while(cin >> n) {
		ans = 0;
		for(int a = 0; a < 10; a++) {
			for(int b = 0; b < 10; b++) {
				for(int c = 0; c < 10; c++) {
					t = n - a - b - c;
					if(t >= 0 && t <= 9)
						ans++;
				}
			}
		}
		cout << ans << endl;
	}

    return 0;
}