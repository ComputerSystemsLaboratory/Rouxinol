#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	

using namespace std;

namespace MyLib {
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long
}

using namespace MyLib;
bool ju[21][21];
int rx[30], ry[30];


int main() {
	int m;
	int l[30];
	char buf;

	int x, y;
	int n;
	while (cin >> n, n) {
		REP(i, 21)
			REP(j, 21)
			ju[i][j] = 0;
		REP(i, n)
			cin >> x >> y, ju[y][x] = 1;
		cin >> m;
		REP(i, m) {
			cin >> buf >> l[i];
			if (buf == 'E') {
				rx[i] = 1;
				ry[i] = 0;
			}
			else if (buf == 'W') {
				rx[i] = -1;
				ry[i] = 0;
			}
			else if (buf == 'N') {
				rx[i]= 0;
				ry[i] = 1;
			}
			else if (buf == 'S') {
				rx[i] = 0;
				ry[i] = -1;
			}

		}
		x = 10, y = 10;
		int count = 0;
		REP(i,m)
			REP(j, l[i]) {
				x += rx[i];
				y += ry[i];
				if (ju[y][x]) {
					ju[y][x] = 0;
					count++;
				}
		}
		if (count == n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;

}