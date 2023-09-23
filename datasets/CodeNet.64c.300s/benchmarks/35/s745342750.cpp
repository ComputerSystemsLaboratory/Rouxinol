#include <iostream>
using namespace std;
int adj[100][100] = {0};
int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		int j, k;
		cin >> j >> k;
		j--;
		for (int m=0;m<k;m++) {
			int a;
			cin >> a;
			a--;
			adj[j][a]=1;
		}
	}

	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (j) cout << ' ';
			cout << adj[i][j];
		}
		cout << endl;
	}
		
	return 0;
}