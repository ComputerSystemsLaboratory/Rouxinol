#include<iostream>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define MAX 1501 * 1001 + 1

int ch[MAX], cw[MAX];
int main()
{
	int N, M;
	while (cin >> N >> M, N || M) {
		int count = 0;
		int h[1501], w[1501];
		REP(i, 0, N) cin >> h[i];
		REP(i, 0, M) cin >> w[i];

		REP(i, 0, MAX) {
			ch[i] = 0;
			cw[i] = 0;
		}
		REP(i, 0, N) {
			int sh = 0;
			REP(j, i, N) {
				sh += h[j];
				ch[sh]++;
			}
		}
		REP(i, 0, M) {
			int sw = 0;
			REP(j, i, M) {
				sw += w[j];
				cw[sw]++;
			}
		}
		REP(i, 0, MAX) count += ch[i] * cw[i];

		cout << count << endl;
	}
    return 0;
}