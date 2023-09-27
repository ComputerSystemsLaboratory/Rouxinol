#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <set>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <map>
#include <cassert>
#include <time.h>
#define _USE_MATH_DEFINES
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;
typedef pair<int, PP> PPP;
typedef pair<string, int > Ps;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF= 1 << 30;
const double EPS = 1e-9;

bool jewel[21][21];
bool can[21][21];
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
int main(){
	int n, m;
	while(cin >> n&& n){
		memset(jewel, false, sizeof(jewel));
		memset(can, false, sizeof(can));
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			jewel[x][y] = true;
		}
		cin >> m;
		int c = 0;
		int x = 10;
		int y = 10;
		can[x][y] = true;
		for(int i = 0; i < m; i++){
			int d;
			int dire;
			char to;
			cin >> to >> d;
			if(to == 'N'){
				dire = 0;
			}else if(to == 'E'){
				dire = 1;
			}else if(to == 'S'){
				dire = 2;
			}else {
				dire = 3;
			}
			for(int j = 0; j < d; j++){
				x += dx[dire];
				y += dy[dire];
				can[x][y] = true;
			}
		}
		
		for(int i = 0; i <= 20; i++){
			for(int j = 0; j <= 20; j++) if(can[i][j] && jewel[i][j]) c++;
		}
		if(c == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}