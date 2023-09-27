#include <iostream>
using namespace std;

int main()
{
	int n,s[100],max,min,nmax,nmin,ret;
	while (cin >> n, n) {
		for(int i = 0;i < n;i++) {
			cin >> s[i];
		}
		min = 1000;
		max = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] > max){
				max = s[i];
				nmax = i;
			}
			if (s[i] < min) {
				min = s[i];
				nmin = i;
			}
		}
		s[nmax] = s[nmin] = 0;
		ret = 0;
		for (int i = 0; i < n; i++) {
			ret += s[i];
		}
		cout << ret / (n - 2) << endl;
	}
	return 0;
}