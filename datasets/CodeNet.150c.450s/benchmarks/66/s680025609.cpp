#include <bits/stdc++.h>

#define INF (1001001001)

int dx[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, 1, -1, -1};

using namespace std;

int main()
{
	int n, m;

	scanf("%d", &n);

	vector<string> ids(n);

	for (int i = 0; i < n; i++){
		cin >> ids[i];
	}

	bool door = false;

	scanf("%d", &m);

	for (int i = 0; i < m; i++){
		string id;

		cin >> id;

		for (int j = 0; j < n; j++){
			if (id == ids[j]){
				if (door == false){
					cout << "Opened by " << id << endl;

					door = true;
				}
				else {
					cout << "Closed by " << id << endl;

					door = false;
				}

				break;
			}

			if (j == n - 1){
					cout << "Unknown " << id << endl;
			}
		}
	}

	return (0);
}