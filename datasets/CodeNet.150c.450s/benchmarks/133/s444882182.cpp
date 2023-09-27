#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <complex>
#include <ctime>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef int itn;
const ll LINF = 1e18;
const int INF = 1e9;

//マクロ定義
#define vvint(vec,n,m,l) vector<vector<int>> vec(n, vector<int>(m,l));	// lで初期化
#define vvll(vec,n,m,l) vector<vector<ll>> vec(n,vector<ll>(m,l));
#define vint vector<int>
#define pint pair<int,int>
#define rep(i,a) for(ll i=0;i<(a);i++)
#define all(x) (x).begin(),(x).end()
#define debug system("pause")				//デバッグ用
#define ret return 0

template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

using Graph = vector<vector<ll>>;

#define ketasitei setprecision(15) //15桁表示

const ll MOD = 1000000007;
const double PI = 3.1415926535897932;

const long long TIME_LIMIT=10000;

ll scorecalc(vector<vector<ll>> a, vector<ll> los, ll d, vector<ll> an)
{
    ll ans = 0;
    
    vector<ll> last(los.size(), 0);
    for (int i = 0; i < an.size(); i++)
    {
        ll loss = 0;
        for (int j = 0; j < 26; j++)
        {
            if (j == an[i] - 1)
                continue;

            loss += los[j] * (i+1LL - last[j]);
        }
        ans += a[i][an[i] - 1] - loss;
        cout << ans << endl;
        last[an[i] - 1] = i + 1LL;
    }

    return ans;
}

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);

    ll d;
    cin >> d;
    vector<ll> c(26);
    rep(i, 26)
    {
        cin >> c[i];
    }
    vector<vector<ll>> s(d, vector<ll>(26));
    rep(i, d)
    {
        rep(j, 26)
            cin >> s[i][j];
    }

    vector<ll> ans(d);
    rep(i, d)
        cin >> ans[i];

    ll score = scorecalc(s, c, d, ans);

   /* vector<ll> last(26, 0);

    for (ll i = 0; i < d; i++)
    {
        ll lost = 0;
        for (int j = 0;j < 26; j++)
        {
            lost += c[j] * (i + 1 - last[j]);
        }
        ll man = s[i][0]-lost+c[0]*(i+1-last[0]);
        ll manu = 1;
        for (int j = 0; j < 26; j++)
        {
            if (man <= s[i][j]-lost+c[j]*(i+1-last[j]))
            {
                man = s[i][j] - lost + c[j] * (i + 1 - last[j]);
                manu = j + 1LL;
                last[j] = i + 1;
            }
        }
        ans[i] = manu;
    }
    ll score = scorecalc(s, c, d, ans);
    ll times = 0;
    while (times < 10000)
    {
        vector<ll> tmpD(1000);
        rep(j, 1000)
        {
            tmpD[j] = (ll)rand() % d;
        }
        vector<ll> tmpN(1000);
        rep(j, 1000)
        {
            tmpN[j] = ans[tmpD[j]];
            ans[tmpD[j]] = (ll)rand() % 26 + 1;
        }

        if (score >= scorecalc(s, c, d, ans))
            rep(j, 1000)
            ans[tmpD[j]] = tmpN[j];
        else
            score = scorecalc(s, c, d, ans);

        times++;
    }

    rep(i, d)
    {
        cout << ans[i] << endl;
    }*/

	return 0;

}