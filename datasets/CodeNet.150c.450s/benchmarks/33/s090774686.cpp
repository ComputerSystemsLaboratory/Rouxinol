#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int i, j, k, n = 0,t;
	int m1, m2;
	int mm1, mm2;
	int temp;

	while (1){
		int x, y, s;//x???????¨????,y??´??°???????¨????,z??????????¨?

		cin >> x >> y >> s;

		if (x == 0 && y == 0 && s == 0) break;

		int max=0;

		for (m1 = 1; m1 < s; m1++){
			for (m2 = 1; m2 < s; m2++){
				if (m1 >= m2){
					//			mm1 = (m1 * (100 + x)) / 100;
					//			mm2 = s - mm1;

					//			m2 = (100 * (mm2 + 0.5)) / (100 + x);
					temp = 0;
					if ((((m1 * (100 + x)) / 100) + ((m2 * (100 + x)) / 100)) == s){
						//			cout << m1 << ' ' << m2 << endl;

						temp = (m1 * (100 + y)) / 100;
						temp += (m2*(100 + y)) / 100;
						if (temp > max){
							max = temp;
							//cout << max << endl;
						}
					}
				}
			}
		}
//		cout << max << endl;
		a[n++] = max;
	}

	for (i = 0; i < n; i++)
		cout << a[i] << endl;

	return(0);
}