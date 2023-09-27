#include <cstdio>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int h, w, n;

int p[10][2];

int dx[] = { 1, 0, -1, 0};
int dy[] = { 0, 1, 0, -1};

bool a[1000][1000];
int m[1000][1000];

char str[1001];

int t(int sx, int sy, int ex, int ey) {
	for (int i=0;i<h;i++) {
		for(int j=0;j<w;j++) {
			m[j][i] = -1;
		}
	}
	m[sx][sy] = 0;
	
	queue< pair<int, int> > que;
	que.push( make_pair(sx, sy) );
	
	while(!que.empty()) {
		 pair<int, int> np = que.front();
		que.pop();
		for(int i=0;i<4;i++) {
			int px = np.first+dx[i], py = np.second+dy[i];
			if( (px<0||px>=w) || (py<0||py>=h) )continue;
			else if( !a[px][py] )continue;
			else if(px==ex&&py==ey)return m[np.first][np.second]+1;
			else if( m[px][py]>=0 && m[px][py]<=(m[np.first][np.second]+1) )continue;
			m[px][py] = m[np.first][np.second]+1;
			que.push( make_pair(px, py) );
		}
	}
	
	cout << "error!" << endl;
	return -1;
}

int main() {
	
	cin >> h >> w >> n;
	
	for(int i=0;i<h;i++) {
		cin >> str;
		for(int j=0;j<w;j++) {
			a[j][i] = (str[j]!='X');
			if(str[j]=='S') {
				p[0][0] = j;
				p[0][1] = i;
			}else if(str[j]>='1' && str[j]<='9') {
				p[str[j] - '0'][0] = j;
				p[str[j] - '0'][1] = i;
			}
		}
	}
	
	int s = 0;
	for(int i=0;i<n;i++) {
		s += t(p[i][0], p[i][1], p[i+1][0],  p[i+1][1]);
	}
	
	cout << s << endl;
	
	return 0;
}