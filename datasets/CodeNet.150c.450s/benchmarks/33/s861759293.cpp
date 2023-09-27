#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int x,y,s;

	cin >> x;
	cin >> y;
	cin >> s;

	while (x!=0||y!=0||s!=0) {
		int s1,s2,s3;
		int r,r_M = 0;
		for (s1 = 1; s1 < (s/2)+1; s1++) {
			for (s2 = 1; s2 < s; s2++) {
				s3 = (((s1*(100+x))/100)+((s2*(100+x))/100));
				if (s3==s) {
					r = (((s1*(100+y))/100)+((s2*(100+y))/100)); 
					if (r > r_M) {
						r_M = r;
					}
				}
			}
		}
		cout << r_M << endl;

		cin >> x;
		cin >> y;
		cin >> s;
	}
	return 0;
}