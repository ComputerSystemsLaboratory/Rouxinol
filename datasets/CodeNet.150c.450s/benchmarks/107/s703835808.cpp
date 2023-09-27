#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcount

#define INF INT_MAX/3

//#define N 2000

template<size_t N>
const bitset<N> operator+(const bitset<N>& lhs, const bitset<N>& rhs)
{
    bitset<N> a(lhs), b(rhs), ret(lhs ^ rhs);

    for (b = (a & b) << 1, a = ret; b.any(); b = (a & b) << 1, a = ret) ret ^= b;

    return ret;
}

template<size_t N>
int edit_distance_bitset(const string& str1, const string& str2)
{
    char s1[N] = { ' ' };
    char s2[N] = { ' ' };
    char *p1, *p2;

    if (str1.size() >= str2.size()) { p1 = s1;  p2 = s2; }
    else { p1 = s2;  p2 = s1; }
    copy(str1.begin(), str1.end(), p1 + 1);
    copy(str2.begin(), str2.end(), p2 + 1);
    int m = strlen(s1);
    int n = strlen(s2);

    const bitset<N> ONE(1);
    bitset<N> Peq[256];
    bitset<N> Pv, Mv, Eq, Xv, Xh, Ph, Mh;
    int Score = m;

    for (int i = 0; i < m; i++) {
        Peq[s1[i]] |= ONE << i;
        Pv |= (ONE << i);
    }
    for (int j = 0; j < n; j++) {
        Eq = Peq[s2[j]];
        Xv = Eq | Mv;
        Xh = (((Eq & Pv) + Pv) ^ Pv) | Eq;
        Ph = Mv | ~(Xh | Pv);
        Mh = Pv & Xh;
        if ((Ph & (ONE << (m - 1))).any()) Score++;
        else if ((Mh & (ONE << (m - 1))).any()) Score--;
        Ph = Ph << 1 | ONE;
        Pv = (Mh << 1) | ~(Xv | Ph);
        Mv = Ph & Xv;
    }

    return Score;
}

int main(){
	string a,b;
  cin>>a>>b;
  cout<<edit_distance_bitset<2000>(a,b)<<endl;
  return 0;
}