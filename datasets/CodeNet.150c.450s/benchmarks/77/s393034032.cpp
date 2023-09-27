#include <cstdio>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		int a[21][21] = {0}, x, y;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			a[x][y] = 1;
		}
		int m, X=10, Y=10, cnt=0;
		char d;
		int l;
		cin >> m;
		for(int j = 0; j < m; j++){
				cin >> d >> l;
				for(int k = 0; k < l; k++){
				if(d == 'N') Y++;
				else if(d == 'E') X++;
				else if(d == 'S') Y--;
				else if(d == 'W') X--;
				if(a[X][Y] == 1){
					cnt++;
					a[X][Y] = 0;
				}
			}
		}
		if(cnt == n) cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
	return 0;
}