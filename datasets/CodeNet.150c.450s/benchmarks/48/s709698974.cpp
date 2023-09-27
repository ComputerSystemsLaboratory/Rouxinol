#include<bits/stdc++.h>
using namespace std;
int main() {
	int e;
	while (scanf("%d", &e), e) {
		int m = 10000000;
		for (int y = 0; y <= 1000; y++) {
			for (int z = 0; z <= 1000; z++) {
				int x=e + y - y * y + z - z * z * z;
					if(x>=0&&e>=y*y+z*z*z) m = min(x,m);
			}
		}
		cout<<m<<endl;
	}
}


