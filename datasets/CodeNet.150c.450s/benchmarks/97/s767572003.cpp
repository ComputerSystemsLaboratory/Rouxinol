#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (int)(n);++i)
#define pb push_back
#define mp make_pair
#define SZ(a) ((int)(a.size()))
#define F first
#define S second
typedef long long ll;
typedef pair<int,int> PI;

const int MAX_N=123456*3;
bool npr[123456*4];
int sum[123456*4];
int main(int argc, char *argv[])
{
	int dx[] = {-1, 0, 1, 0};
	int dy[] = {0, 1, 0, -1};
	int x[500], y[500];
	for(;;){
		int n;
		cin >> n;
		if(n==0){
			break;
		}
		int maxX=0, minX=0, maxY=0, minY=0;
		x[0] = y[0] = 0;
		for(int i=1;i<n;i++){
			int a, d;
			cin >> a >> d;
			x[i] = x[a] + dx[d];
			y[i] = y[a] + dy[d];
			maxX = max(maxX, x[i]);
			minX = min(minX, x[i]);
			maxY = max(maxY, y[i]);
			minY = min(minY, y[i]);
		}
		cout << (maxX - minX + 1) << " " << (maxY - minY + 1) << endl;
	}

  return 0;
}