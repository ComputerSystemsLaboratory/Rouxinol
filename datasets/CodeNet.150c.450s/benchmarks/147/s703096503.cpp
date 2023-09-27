#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
#define pri(str) cout << str << endl
using ll = long long;
using P = pair<int, int>;

const ll MX = 1e18;
const long double PI = acos(-1);

int main()
{
    int n; cin >> n;
    vector<int> count(10005);
    int a = sqrt(n);
    
    for(int i=1; i < a; ++i)
    {
        for(int j=1; j < a; ++j)
        {
            for(int k=1; k < a; ++k)
            {
                int s = i*i+j*j+k*k+i*j+j*k+k*i;
                if(s < 10005)
                    count[s-1] += 1;
            }
        }
    }

    if(n == 0)
        pri(0);
    else
    {
        rep(i,n)
            pri(count[i]);
    }
    return 0;
}
