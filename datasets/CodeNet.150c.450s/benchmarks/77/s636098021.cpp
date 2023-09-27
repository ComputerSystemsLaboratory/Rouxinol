#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		int N;

		cin >> N;

		if (N == 0) {
			break;
		}

		int map[21][21];

		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				map[i][j] = 0;
			}
		}

		for (int i = 0; i < N; i++) {
			int x, y;

			cin >> x >> y;

			map[x][y]++;
		}

		int M;
		int robox = 10;
		int roboy = 10;

		cin >> M;

		for (int i = 0; i < M; i++) {
			string str;
			int distance;

			cin >> str >> distance;

			if (str == "N") {
				for (int j = 0; j < distance; j++) {
					roboy++;
					map[robox][roboy] = 0;
				}
			}
			else if (str == "E") {
				for (int j = 0; j < distance; j++) {
					robox++;
					map[robox][roboy] = 0;
				}
			}
			else if (str == "S") {
				for (int j = 0; j < distance; j++) {
					roboy--;
					map[robox][roboy] = 0;
				}
			}
			else {
				for (int j = 0; j < distance; j++) {
					robox--;
					map[robox][roboy] = 0;
				}
			}
		}

		bool flag = true;

		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				if (map[i][j] != 0) {
					flag = false;
					goto Label;
				}
			}
		}

	Label:

		if (flag == true) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}