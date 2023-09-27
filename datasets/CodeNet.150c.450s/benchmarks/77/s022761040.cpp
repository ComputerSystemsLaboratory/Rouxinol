#include <iostream>
using namespace std;

int main() {
	int n, m, a[20][2], flag[20], x, y, flag2, c[30];
	char b[30];
	
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			cin >> a[i][0] >> a[i][1];
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> b[i] >> c[i];
		
		for (int i = 0; i < n; i++)
			flag[i] = 1;
		x = y = 10;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < c[i]; j++) {
				if (b[i] == 'N') y++;
				else if (b[i] == 'E') x++;
				else if (b[i] == 'S') y--;
				else x--;
				
				for (int k = 0; k < n; k++)
					if (x == a[k][0] && y == a[k][1])
						flag[k] = 0;
			}
		}
		
		flag2 = 0;
		for (int i = 0; i < n; i++) {
			if (flag[i])  {
				flag2 = 1;
				break;
			}
		}
			
		if (!flag2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}