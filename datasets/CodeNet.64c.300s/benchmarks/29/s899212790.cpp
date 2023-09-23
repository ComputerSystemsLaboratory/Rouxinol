#include <iostream>
#include <cmath>

using namespace std;

int counter = 0;

//x y z
/*
int solve(int E) {
	int ans = 3000000;
	for (int x = 0; x <= E; x++)
		for (int y = 0; y * y <= E; y++){
			double z = cbrt(E - x - y * y);
			counter++;
			if (ceil(z) == floor(z) && z >= 0){
				int z2 = z;
				ans = min(ans, x + y + z2);
			}
		}
	return ans;
}
*/

//y z x

int solve(int E) {
	int ans = 1000000;
	for (int y = 0; y * y <= E; y++)
		for (int z = 0; z * z * z <= E; z++){
			int x = E - y * y - z * z * z;
			counter++;
			if (x >= 0)
				ans = min(ans, x + y + z);
		}
	return ans;
}


//z x y
/*
int solve(int E) {
	int ans = 3000000;
	for (int z = 0; z * z * z <= E; z++)
		for (int x = 0; x <= E; x++){
			double y = sqrt(E - x - z * z * z);
			counter++;
			if (ceil(y) == floor(y) && y >= 0){
				int y2 = y;
				ans = min(ans, x + y2 + z);
			}
		}
	return ans;
}
*/

//main

int main() {
	int E;
	while (cin >> E && E > 0) {
		cout << solve(E) << endl;
	}
}


//count
/*
int main(){
	int E[] = {100, 10000, 1000000};
	for (int i = 0; i < 3; i++){
		counter = 0;
		solve(E[i]);
		cout << "E = " << E[i] << ", counter = " << counter << endl;
	}
}
*/