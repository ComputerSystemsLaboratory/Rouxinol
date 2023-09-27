#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long a, b, c=0, d=0, f, n, m;
	
	while (cin >> a){
	c=0;
	for (int i=0; i <= 9; i ++){
		for (int j=0; j <= 9; j ++){
			for (int k=0; k <= 9; k ++){
				for (int l=0; l <= 9; l ++){
					if (i + j + k + l == a ){
						c ++;
					}
					
				}
			}	
		}
	}
	cout << c << endl;
	}
	return 0;
}
