#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define each(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); ++itr)
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

int main()
{
    int m,a,b;
    while(cin >>m >>a >>b,m)
    {
        vector<int> p(m);
        rep(i,m) cin >>p[i];

        int ans=b;
        int gap=0;

        //????????????i?????¨??????
        for(int i=b; i>=a; --i)
        {
            int tgap=p[i-1]-p[i];
            if(tgap>gap)
            {
                gap=tgap;
                ans=i;
            }
        }

        cout << ans << endl;
    }
    return 0;
}