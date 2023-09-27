#include <iostream>
#include <cstdio>
#include <algorithm>
#define rep0(i, n) for (i = 0; i < n; i++)
#define rep(s, i, n) for (i = s; i < n; i++)
#define N_MAX 100000
using namespace std;

int N;
int ans[4];

int main()
{
    int i;
    string s;
    cin >> N;
    rep0(i,N) {
        cin>>s;
        if(s=="AC") ans[0]++;
        else if(s=="WA") ans[1]++;
        else if(s=="TLE") ans[2]++;
        else if(s=="RE") ans[3]++;
        else break;
    }
    cout << "AC x " << ans[0] <<endl;
    cout << "WA x " << ans[1] <<endl;
    cout << "TLE x " << ans[2] <<endl;
    cout << "RE x " << ans[3] <<endl;
    return 0;
}