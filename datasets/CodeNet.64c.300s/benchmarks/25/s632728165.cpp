
#include <iostream>
using namespace std;

int main()
{
	int a[4], b[4];
	static int ans[100][2];
	int hit, bro, count = 0;
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		hit = 0;
		bro = 0;
		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i])
				hit++;
			else {
				for (int k = 0; k < 4; k++) {
					if (a[i] == b[k])
						bro++;
				}
			}
		}
		ans[count][0] = hit;
		ans[count][1] = bro;
		count++;
	}
	for (int i = 0; i < count; i++) 
		cout << ans[i][0] << " " << ans[i][1] << endl;
}