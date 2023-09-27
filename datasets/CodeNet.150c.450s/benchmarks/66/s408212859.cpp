#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define INF 10e9

int main()
{
	int N, M;
	string U[260], T[260];
	cin >> N;
	REP(i, 0, N) cin >> U[i];
	cin >> M;
	REP(i, 0, M) cin >> T[i];
	
	bool open = false;
	REP(i, 0, M) {
		REP(j, 0, N) {
			if (T[i] == U[j] && !open) {
				cout << "Opened by " << T[i] << endl;
				open = true;
				break;
			}
			else if (T[i] == U[j] && open) {
				cout << "Closed by " << T[i] << endl;
				open = false;
				break;
			}

			if (j == N - 1) cout << "Unknown " << T[i] << endl;
		}
	}

	return 0;
}