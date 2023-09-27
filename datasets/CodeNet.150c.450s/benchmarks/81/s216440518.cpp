#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,a,b,c,house,sum,mins;
	while (cin >> n, n) {
		vector< vector<int> > road(10, vector<int>(10, 10001));
		for (int i = 0; i < 10; i++)
			road[i][i] = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			road[a][b] = road[b][a] = c;
		}
		for (int k = 0; k < 10; k++) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (road[i][k] != 10001 && road[k][j] != 10001)
						if (road[i][j] > road[i][k] + road[k][j]) road[i][j] = road[i][k] + road[k][j];
				}
			}
		}
		house = 0;
		mins = 100001;
		for (int i = 0; i < 10; i++) {
			sum = 0;
			for (int j = 0; j < 10; j++) {
				if(road[i][j] != 10001)
					sum += road[i][j];
			}
			if (sum != 0 && mins > sum) {
				mins = sum;
				house = i;
			}
		}
		cout << house << " " << mins << endl;
	}
	return 0;
}