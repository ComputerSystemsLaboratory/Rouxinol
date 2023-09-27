#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int x, y, s;
		int ma = 0;
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0) break;

		for(int i=1; i<s; i++){
			for(int j=1; j<s; j++){
				int p1 = i;
				int p2 = j;
				int p1x = p1*(100 + x)/100;
				int p2x = p2*(100 + x)/100;
				//printf("p1,p2:%d %d\n", p1, p2);

				//cout << p1x + p2x << endl;
				//cout << 13*105/100 + 88*105/100 << endl;
				if(p1x + p2x == s){
					int p1y = p1*(100 + y)/100;
					int p2y = p2*(100 + y)/100;

					if(p1y + p2y > ma){
						ma = p1y + p2y;
					}
				}

			}
		}

		cout << ma << endl;

	}
	
	return 0;
}