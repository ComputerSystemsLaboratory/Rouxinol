#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int a[4], b[4];
	
	a[0] = -1;
	cin >> a[0];
	
	while (a[0] != -1) {
		cin >> a[1] >> a[2] >> a[3];
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		
		int hit = 0;
		int bite = 0;
		
		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i]) hit++;
		}
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i == j) continue;
				
				if (a[i] == b[j]) {
					bite++;
					break;
				}
			}
		}
		
		cout << hit << " " << bite << endl;
		
		a[0] = -1;
		cin >> a[0];
	}
	
	return 0;
}