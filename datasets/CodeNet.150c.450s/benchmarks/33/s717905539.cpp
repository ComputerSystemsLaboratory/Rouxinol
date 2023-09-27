#include <iostream>
using namespace std;

int main() {
	int x, y, s;
	int max, t, u;
	while(cin >> x >> y >> s, x) {
		max = 0;
		for(int i=1;i<=s;i++) {
			for(int j=1;j<=s;j++) {
				t = (int)(i*(100.0+x)/100.0) + (int)(j*(100.0+x)/100.0);
				u = (int)(i*(100.0+y)/100.0) + (int)(j*(100.0+y)/100.0);
				if(t == s)
					if(max < u)
						max = u;
			}
		}
		cout << max << endl;
	}
	return 0;
}