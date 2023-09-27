#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define CL(N) cout << N << endl
#define DCT(N) cout << "debug " << N << endl
#define REP(i, N) for (int i = 0; i < N; i++)
/* }}} */

int main()
{
	int n, l;

    while (cin >> n >> l, n || l){
        int a[100000];
        REP(i, n){
            cin >> a[i];
        }

        int sum = 0;
        REP(i, n - l + 1){
            int si = 0;
            REP(j, l){
                si += a[i + j];
            }

            sum = max(sum, si);
        }

        CL(sum);
    }

	return (0);
}