#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	string b, c;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a[1010][1010] = {};
		cin >> b >> c;
		for (int x = 1; x <= b.size(); x++){
			for (int y = 1; y <= c.size(); y++){
				if (b[x - 1] == c[y - 1]){
					a[x][y] = a[x - 1][y - 1] + 1;
				}
				else {
					a[x][y] = max(a[x][y - 1], a[x - 1][y]);
				}
			}
		}
		cout << a[b.size()][c.size()] << endl;
	}
	return 0;
}