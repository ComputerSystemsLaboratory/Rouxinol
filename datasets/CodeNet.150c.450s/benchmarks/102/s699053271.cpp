#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>
#include <map>

#define ll long long int
#define MAX_W 20
#define MAX_H 20

using namespace std;

char field[MAX_W][MAX_H];
bool reach[MAX_W][MAX_H];
int h, w;
int cou = 0;


void search(int x, int y)
{
	if (x < 0 || w <= x || y < 0 || h <= y || field[x][y] == '#') {
		return;
	}

	if (reach[x][y] == true) {
		return;
	}

	reach[x][y] = true;


	cou++;



	search(x - 1, y);
	search(x + 1, y);
	search(x, y + 1);
	search(x, y - 1);

}

int main(void)
{
	vector <string> s;
	vector <int> ans;
	int i, j;

	int dx, dy; //start

	string temp;


	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) {
			break;
		}

		for (i = 0; i < h; i++) {
			cin >> temp;
			s.push_back(temp);
		}

		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				field[j][i] = s[i][j];
				if (s[i][j] == '@') {
					dx = j;
					dy = i;
				}
			}
		}




		search(dx, dy);

		ans.push_back(cou);
		cou = 0;

		s.clear();

		for (i = 0; i < MAX_W; i++) {
			
			for (j = 0; j < MAX_H; j++) {


				field[i][j] = '#';
				reach[i][j] = false;
			}
		}


	}
	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}

	return (0);
}