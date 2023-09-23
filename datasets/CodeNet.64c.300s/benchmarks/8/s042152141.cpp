	#include <cstdio>
	#include <iostream>
	using namespace std;
	#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
	#define rep(x,to) rep2(x,0,to)
	int n;

	int main() {
		cin >> n;
		int i = 1;
		while(n > i) {
			++i;
			if(i % 3 == 0) cout <<  " " << i;
			else  {
				int x = i;
				while(x) {
					if (x % 10 == 3) {
						cout << " " << i;
						break;
					}
					x /= 10;
				}
			}
		}
		cout << endl;
		return 0;
	}