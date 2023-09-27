#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>
using namespace std;


int main()
{
	int x, y, z, m, E;
	while (cin >> E &&E > 0) {
		m = E;
		for (z = 0; z*z*z <= E; z++) {
			for (y = 0; y*y + z*z*z <= E; y++) {
				x = E - y*y - z*z*z;
				if (m > x + y + z)m = x + y + z;
			}
		}
		cout << m << endl;
	}
}