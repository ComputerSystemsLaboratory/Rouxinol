#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
int main() {
	int n, q,cnt=0;
	cin >> n;
	int *p1 = (int *)malloc(sizeof (int)*n);
	for (int i = 0; i < n; i++) {
		cin >> p1[i];
	}
	cin >> q;
	int *p2 = (int*)malloc(sizeof(int)*q);
	for (int i = 0; i < q; i++) {
		cin >> p2[i];
		//cout << *find(p1, p1 + n, p2[i]) << endl;
		if (find(p1, p1 + n, p2[i])!=p1+n) {
			cnt++;
		}
	}
	free(p1); free(p2);
	cout << cnt << endl;
	return 0;
}