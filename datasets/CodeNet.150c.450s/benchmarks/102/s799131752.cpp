#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<set>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include <algorithm>

using namespace std;

int main(){
	int w, h;
	int sx, sy;
	int dx[4] = { 1, 0, -1, 0 }, dy[4] = {0 , 1 , 0 , -1};
	char str[20];

	cin >> w >> h;
	do{
		int masu[20][20] = { 0 };
		int check_masu[20][20] = { 0 };

		for (int i = 0; i < h; i++){
			cin >> str;
			for (int j = 0; j < w; j++){
				masu[j][i] = str[j];
				if (masu[j][i] == '@'){
					sx = j; sy = i;
				}
			}
		}

		int x, y;
		int count = 0; //count looked check
		stack< pair<int, int> > s;
		s.push(make_pair(sx, sy));	//set start place 
		while (s.size()){
			x = s.top().first;
			y = s.top().second;
			s.pop();

			if (check_masu[x][y] == 'c' || masu[x][y] == '#')
				continue;

			check_masu[x][y] = 'c';	//looked
			count++;

			for (int i = 0; i < 4; i++){
				if ((0 <= x + dx[i] && x + dx[i] < w)
					&& (0 <= y + dy[i] && y + dy[i] < h)){

					s.push(make_pair(x + dx[i], y + dy[i]));
				}
			}
		}

		cout << count << endl;

		cin >> w >> h;
	} while (w != 0 && h != 0);

	return 0;
}