#include<iostream>
#include<algorithm>
using namespace std;

long long d[2000], e[2000];
int	w[2000], h[2000], a[1501 * 1024], b[1502 * 1024], n, m;

int main(){

	while (cin >> n >> m, n){
		long k = 0, l = 0, count = 0, f = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> w[i];
			if (i==1)d[1] = w[i];
			else if (i > 1)d[i] = w[i] + d[i - 1];
		}
		for (int i = 1; i <= m; i++)
		{
			cin >> h[i];
			if (i==1)e[1] = h[i];
			else e[i] = h[i] + e[i - 1];
		}
		d[0] = 0; e[0] = 0;
		for (int i = 1; i <= n; i++)
			for (int j = 0; j < i; j++){
				a[k] = d[i] - d[j]; k++;
			}
		for (int i = 1; i <= m; i++)
			for (int j = 0; j < i; j++){
				b[l] = e[i] - e[j]; l++;
			}
		sort(a, a + k);
		sort(b, b + l);

		for (int i = 0; i < k && f < l; i++)
			for (; f < l;){
				if (a[i] == b[f]){
					int q = f;
						do{
							count++; q++; if (q == l)break;
						} while (a[i] == b[q]);break;
				}
				if (a[i] < b[f])break;
				else f++;
			}
		cout << count << endl;
	}
}