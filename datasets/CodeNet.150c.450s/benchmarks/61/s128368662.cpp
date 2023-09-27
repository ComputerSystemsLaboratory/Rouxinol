#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, x, y;
	while (1){
		cin >> n >> a >> b >> c >> x;
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0){
			break;
		}
		int f = 0;
		for (int i = 0; i < n; i++){
			cin >> y;
			if (f != -1){
				while (1){
					if (y == x){
						if (n != i + 1){
							x = (a * x + b) % c;
							f++;
						}
						break;
					}
					x = (a*x + b) % c;
					f++;
					if (f > 10000){
						f = -1;
						break;
					}
				}
			}
		}
		cout << f << endl;
	}
	return 0;
}