#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x, y, s;
	while (1){
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;
		int max = 0;
		for (int i = 2; i <= s; i++){
			for (int j = 1; j < i; j++){
				int c = ceil((j*(100+x)/100) + ((i-j)*(100+x)/100));
				if (c == s){
					int newC = ceil((j*(100 + y) / 100) + ((i - j)*(100 + y) / 100));
					if (newC > max) max = newC;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}