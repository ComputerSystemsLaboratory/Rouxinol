#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int main() {
	int N = 0;
	scanf("%d", &N);
	vector<long>v (N+1,0);

	
	for (int x = 1; x <= 100; x++) {
		for (int y = 1; y <= 100; y++) {
			for (int z = 1; z <= 100; z++) {
				if ((x * x + y * y + z * z + x * y + x * z + z * y) != 0 && ((x * x + y * y + z * z + x * y + x * z + z * y) < v.size())) {
					v[(x * x + y * y + z * z + x * y + x * z + z * y) - 1]++;
				}
				
			}
			
		}
		
	}
	for (int i = 0; i < N; i++) {
		string str = to_string(v[i]);
		const char* l = str.c_str();
		printf(l);
		//if (i != N - 1) {
		printf("\n");
	//}
	}
	
	return 0;
}