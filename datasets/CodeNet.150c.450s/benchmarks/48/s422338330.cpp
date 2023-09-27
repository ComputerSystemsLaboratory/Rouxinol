#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main( void )
{
	int e;
	while(cin >> e, e) {
		bool hit = false;
		int answer = 1000001, sq_y = (int)(sqrt((double)e) + 1);
		for(int z=100; z > -1 && !hit; --z) {
			int sum_z = z * z * z;
			if(sum_z == e) { answer = min(answer, z); continue; }
			else if(sum_z > e) continue;
			for(int y=0; y < sq_y; ++y) {
				int sum_zy = sum_z + y * y;
				if(sum_zy == e) { answer = min(answer, z + y); break; }
				else if(sum_zy > e) break;
				else {
					answer = min(answer, (z + y + e - sum_zy));
				}
			}
		}
		cout << answer << endl;
	}
	return 0;
}