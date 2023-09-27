#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int q;
    char x[1001], y[1001];
    int table[1001][1001];
    
    cin >> q;
    for (int i = 0; i < q; i++) {
	cin >> x >> y;
	int xl = strlen(x), yl = strlen(y);

	for (int i = 0; i < xl; i++)
	    for (int j = 0; j < yl; j++)
		if (x[i] == y[j])
		    table[i+1][j+1] = 1 + table[i][j];
		else
		    table[i+1][j+1] = max(table[i][j+1], table[i+1][j]);

	cout << table[xl][yl] << endl;
    }

    return 0;
}