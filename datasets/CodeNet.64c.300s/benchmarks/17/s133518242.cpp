#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x, y, s;
	while(1){
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0) break;
		int max = -1;
		for(int i = 1; i < s; i++){
			for(int j = 1; j < s; j++){
				int m, n ,o;
				m = (i * (100 + x)) / 100;
				n = (j * (100 + x)) / 100;
				o = m + n;
				if(o == s){
					int b;
					b = (i * (100 + y) / 100) + (j * (100 + y) / 100);
					if(b > max) max = b;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}