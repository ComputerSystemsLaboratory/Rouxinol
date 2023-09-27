#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define rrev(i, m, n) for(int (i)=(n)-1; (i)>=(m); (i)--)
#define erev(i, m, n) for(int (i)=(n); (i)>=(m); (i)--)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define pb            push_back
template<class T, class S> inline pair<T, S> mp(T x, S y){ return make_pair(x, y); }
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

static const int    INF = 1000000000;
static const ll     MOD = 1000000007LL;
static const double EPS = 1E-12;

int n;
string s;

string bt[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int ln[] = {5, 3, 3, 3, 3, 3, 4, 3, 4};

int main()
{
  cin >> n;

  while(n--){
    cin >> s;
    int ptr = 0;
    while(ptr < s.size()){
      int cnt = 0;
      while(ptr < s.size() && s[ptr] == '0') ptr += 1;
      if(ptr >= s.size()) break;
      while(ptr < s.size() - 1 && s[ptr] == s[ptr + 1]){
        cnt += 1;
        ptr += 1;
      }
      if(ptr >= s.size()) break;
      cout << bt[s[ptr]-'0'-1][cnt % (ln[s[ptr]-'0'-1])];
      if(ptr >= s.size()) break;
      ptr += 1;
    }
    cout << endl;
  }

  return 0;
}