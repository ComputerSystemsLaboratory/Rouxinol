#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;





int main()
{
	int a[4], b[4];
	int u[4];
	int hit, blow;
	while (cin >> a[0]) {
		cin >> a[1] >> a[2] >> a[3];
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		fill(u, u + 4,-1);
		hit = blow = 0;
		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i]) {
				hit++;
				u[i] = 1;
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ( u[i] == -1&&a[i]==b[j]) {
					blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
}