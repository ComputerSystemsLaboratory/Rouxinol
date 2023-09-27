#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define ms(s,x) memset(s,x,sizeof(s))
#define pb push_back
#define inf 0x3f3f3f3f
#define IOS ios::sync_with_stdio(false);cin.tie(0)
typedef long long ll;
using namespace std;

const double PI = acos(-1.0);
const double eps = 1e-8;
const int MAXN = 2e5+5;
const ll MOD = 1e9+7;

int num[MAXN], tmp[MAXN];
ll ans = 0;

void mergesort(int left, int right)
{
    if (right - left <= 1)
        return;
    int mid = (left + right) >> 1;
    int i = left, j = mid, k = left;
    mergesort(left, mid);
    mergesort(mid, right);
    while (i < mid && j < right)
    {
        if (num[i] <= num[j])
            tmp[k++] = num[i++];
        else
        {
            tmp[k++] = num[j++];
            ans += mid-i;
        }
    }
    while (i < mid)
        tmp[k++] = num[i++];
    while (j < right)
        tmp[k++] = num[j++];
    rep(i, left, right-1){
        num[i] = tmp[i];
    }
}

int main()
{
    IOS;
    int n;
    cin >> n;
    rep(i, 0, n-1){
        cin >> num[i];
    }
    mergesort(0, n);
    cout << ans << endl;

    return 0;
}

