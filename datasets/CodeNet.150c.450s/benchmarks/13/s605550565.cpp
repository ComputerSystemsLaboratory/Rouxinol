#include<bits/stdc++.h>
using namespace std;
#define int long long
#undef int
#define mk make_pair
#define pb push_back
typedef pair<int, int> pii;
const int mod = 1000000007;
const int INF = 1000000009;

string s, t;

signed main()
{
    cin >> s >> t;
    int N = s.size();
    const int M = t.size();
    s += s;
    for(int i = 0; i < N; i++){
        //cout << s.substr(i, M) << endl;
        if(t == s.substr(i, M)){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}

/*



*/

