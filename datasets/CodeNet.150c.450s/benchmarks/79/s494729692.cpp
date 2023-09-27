#include <bits/stdc++.h>
using namespace std;
#define PB push_back

int main()
{
	int n, r;
	while (scanf("%d %d", &n, &r), n + r){
		vector<int> a;
		for (int i = n; i >= 1; i--){
			a.PB(i);
		}
		for (int i = 0; i < r; i++){
			int p, c;
			scanf("%d %d", &p, &c);
			vector<int> b;
			for (int i = p - 1; i < p + c - 1; i++){
				b.PB(a[i]);
			}
			for (int i = 0; i < p - 1; i++){
				b.PB(a[i]);
			}
			for (int i = p + c - 1; i < n; i++){
				b.PB(a[i]);
			}
			a = b;
		}
		printf("%d\n", a[0]);
	}
	
	return 0;
}