#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int g[n + 1][n + 1];
    //?????????
    for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= n; j++) {
	    g[i][j] = 0;
	}
    }
    //input
    for (int i = 1; i <= n; i++) {
	int a;
	cin >> a;
	int b;
	cin >> b;
	for (int j = 1; j <= b; j++) {
	    int c;
	    cin >> c;
	    g[a][c] = 1;
	}
    }
    for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= n; j++) {
	    cout << g[i][j];
	    if (j != n) {
		cout << " ";
	    }
	}
	cout << endl;
    }
    return 0;
}