#include <iostream>
using namespace std;

int main() {
	for(int E; cin >> E && E; ) {
		int best = 1 << 30;
		
		for(int z = 0; z * z * z <= E; z++) {
			for(int y = 0; y * y + z * z * z <= E; y++) {
				int x = E - y * y - z * z * z;
				
				best = min(best, x + y + z);
			}
		}
		
		cout << best << endl;
	}
}