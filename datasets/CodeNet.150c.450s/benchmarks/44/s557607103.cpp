#include <iostream>

using namespace std;

int main()
{
	int a[4], b[4];
	
	while ( cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3] ) {
		
		int hit_cnt = 0;
		int blow_cnt = 0;
		
		for (int i=0; i<4; i++) {
			if (a[i] == b[i]) { hit_cnt++; a[i] = b[i] = -1; }
		}
		
		for (int i=0; i<4; i++) {
			if (a[i] == -1) continue;
			for (int j=0; j<4; j++) {
				if (a[i] == b[j]) { blow_cnt++; a[i] = b[j] = -1; break; }
			}
		}
		
		cout << hit_cnt << " " << blow_cnt << endl;
	}	
		
	return 0;
}