#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double ld;
//typedef tree<int,null_type,less<int >,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
template <class T1, class T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p);
template <class T>
ostream &operator<<(ostream &os, vector<T> &v);
template <class T>
ostream &operator<<(ostream &os, set<T> &v);
template <class T>
ostream &operator<<(ostream &os, multiset<T> &v);
template <class T1, class T2>
ostream &operator<<(ostream &os, map<T1, T2> &v);
#ifdef APURBA
#define debug(a) cout << #a << " --> " << (a) << "\n";
#define debug2(a) cout << #a << " --> " << (a) << " ";
#define HERE cout << "here - " << __LINE__ << "\n";
#else
#define debug(a)
#define debug2(a)
#define HERE
#endif
const ll mod = 1e9 + 7;
const int N = 2e5 + 5;
typedef pair<int, int> pii;

void TEST_CASES(int cas)
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    if (s[n - 1] == '1')
    {
        cout << 1 << "\n";
        return;
    }
    vector<ll> v;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll now = a[i];
        for (auto it : v)
        {
            now = min(now, now ^ it);
        }
        if (s[i] == '0')
        {
            v.push_back(now);
        }
        else if(now)
        {
            cout<<1<<"\n";
            return;
        }
    }
    cout << "0\n";
}

/*

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t = 1, cas = 0;
    cin >> t;
    while (t--)
    {
        TEST_CASES(++cas);
    }
    return 0;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p)
{
    os << "{" << p.first << ", " << p.second << "} ";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    os << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << " ]";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, multiset<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << " ]";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, set<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << " ]";
    return os;
}
template <class T1, class T2>
ostream &operator<<(ostream &os, map<T1, T2> &v)
{
    for (auto i : v)
    {
        os << "Key : " << i.first << " , Value : " << i.second << endl;
    }
    return os;
}
