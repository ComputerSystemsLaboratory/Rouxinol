#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define PI(N) M_PI * N / 180 //?§???????????????¢??????????????????
#define CL(N) cout << N << endl
#define DCT(N) cout << "debug " << N << endl
#define REP(i, N) for (int i = 0; i < N; i++)
/* }}} */

int main()
{
    int n, sco[2] = {0};

    cin >> n;

    REP(i, n){
        string s1, s2;
        cin >> s1 >> s2;

        if (s1 > s2){
            sco[0] += 3;
        }
        else if (s1 < s2){
            sco[1] += 3;
        }
        else if (s1 == s2){
            sco[0]++;
            sco[1]++;
        }
    }

    cout << sco[0] << " " << sco[1] << endl;

    return (0);
}