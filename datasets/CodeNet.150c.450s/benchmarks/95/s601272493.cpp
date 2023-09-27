#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)

int main()
{
    while(true)
    {
        int N; cin >> N;
        if(N == 0) return 0;

        vector<string> F(N);
        rep(i, N)
        {
            cin >> F[i];
        }

        int cnt = 0;
        rep(i, N / 2)
        {
            if(F[i * 2][0] != F[i * 2 + 1][0])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}

