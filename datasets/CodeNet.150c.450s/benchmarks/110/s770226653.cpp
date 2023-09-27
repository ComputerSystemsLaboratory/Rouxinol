#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

struct mouse{
	int y, x, dis;
	mouse(){
		y = x = dis = 0;
	}
};

char stage[1000][1000];
int ng[1000][1000] = {};
int main(){
	int h, w, n;
	mouse s;
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++){
		cin >> stage[i];
		for (int j = 0; j < w; j++){
			if (stage[i][j] == 'S'){
				s.y = i;
				s.x = j;
			}
			else if (stage[i][j] != 'X' && stage[i][j] != '.'){
				stage[i][j] -= '0';
			}
		}
	}

	int ny, nx;
	int situ_y[4] = { -1, 0, 1, 0 }, situ_x[4] = { 0, 1, 0, -1 };
	for (int target = 1; target <= n; target++){
		queue<mouse> mickey;
		mouse m_c;
		for (int i = 0; i < h; i++)for (int j = 0; j < w; j++)ng[i][j] = 0;
		mickey.push(s);
		while (1){
			m_c = mickey.front();
			if (stage[m_c.y][m_c.x] == target){
				s = m_c;
				break;
			}
			if ((m_c.dis != 0 && ng[m_c.y][m_c.x] >= 4)
				|| stage[m_c.y][m_c.x] == 'X'){
				mickey.pop();
				continue;
			}
			ng[m_c.y][m_c.x]++;
			for (int i = 0; i < 4; i++){
				m_c = mickey.front();
				ny = m_c.y + situ_y[i];
				nx = m_c.x + situ_x[i];
				if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
				m_c.y = ny;
				m_c.x = nx;
				m_c.dis++;
				mickey.push(m_c);
			}
			mickey.pop();
		}
	}
	printf("%d\n", s.dis);
	return 0;
}