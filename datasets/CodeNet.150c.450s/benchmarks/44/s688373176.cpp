#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from); x<(to); (x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int a[4], b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hit=0, blow=0;
		rep(i,4) {
			rep(j,4) {
				if(a[i] == b[j]) {
					if(i == j) hit++;
					else blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}