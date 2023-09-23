#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int a[4];
	int b[4];
	while(cin >> a[0]){
		int hit = 0;
		int brow = 0;
		FOR(i,1,4){
			cin >> a[i];
		}
		rep(i,4){
			cin >> b[i];
			if(a[i] == b[i])hit++;
		}
		rep(i,4)rep(j,4){
			if(a[i] == -1 || b[j] == -1)continue;
			if(a[i] == b[j]){
				brow++;
				a[i] = -1; b[j] = -1;
			}
		}
		cout << hit << " " << (brow-hit) << endl;
	}

	return 0;
}