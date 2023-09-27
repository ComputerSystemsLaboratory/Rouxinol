#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 20;
const int NMAX = 50000;
const int INF = 999999999;
int main()
{
	int n, m;
	int min[NMAX], faceVal[MAX];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> faceVal[i];
	min[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		min[i] = INF;
		for (int j = 0; j < m; j++)
			if (i >= faceVal[j] && min[i] > min[i - faceVal[j]] + 1)
				min[i] = min[i - faceVal[j]] + 1;
	}
	cout << min[n] << endl;
}
