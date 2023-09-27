#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main( void )
{
	int e;
	while(cin >> e, e) {
		bool hit = false;
		int answer = 1000001;
		for(int z=100; z > -1 && !hit; --z) {
			int sum_z = z * z * z;
			if(sum_z == e) { answer = min(answer, z); continue; }
			else if(sum_z > e) continue;
			else {
				int y = (int)sqrt((double)(e - sum_z));
				int sum_zy = sum_z + y * y;
				answer = min(answer, (z + y + e - sum_zy));
			}
		}
		cout << answer << endl;
	}
	return 0;
}