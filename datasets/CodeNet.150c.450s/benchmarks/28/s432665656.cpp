#include <bits/stdc++.h>
#define MAX_W 10000
using namespace std;
int n, k, w[100000];

bool Judge(int P) {
	int need = 1, now = 0;
	for (int i = 0; i < n; i++) {
		if (now + w[i] <= P) {
			now += w[i];
		}
		else if(w[i] <= P) {
			need++;
			now = w[i];
		}
		else {
			return false;
		}
	}
	return need <= k;
}

int Binary_Search(int mini, int maxi) {
	while (mini + 1 < maxi) {
		int center = (mini + maxi) / 2;
		if (Judge(center))
			maxi = center;
		else
			mini = center;
	}
	return maxi;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n;i++)
		cin >> w[i];

	cout << Binary_Search(0, MAX_W * n) << endl;
	return 0;
}