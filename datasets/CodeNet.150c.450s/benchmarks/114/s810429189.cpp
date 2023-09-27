#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#define fi first
#define se second

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair< int,pair<int,int> > pp;

vi P;
vector<pp> d;

inline void init()
{
  int n;
  vvi a;
  cin >> n;
  P.resize(n);
  for(int i = 0; i < n; ++i)
    P[i] = i;
  a.resize(n);
  for(int i = 0; i < n; ++i){
    a[i].resize(n);
    for(int j = 0; j < n; ++j)
      cin >> a[i][j];
  }
  for(int i = 0; i < n; ++i)
    for(int j = i + 1; j < n; ++j)
      if(a[i][j] != -1){
	d.push_back(make_pair(a[i][j],make_pair(i,j)));
      }
  sort(d.begin(),d.end());
}

inline int root(int a)
{
  if(P[a] == a) return a;
  else return (P[a] = root(P[a]));
}

inline bool same(int a, int b)
{
  return root(a) != root(b);
}

inline void unite(int a, int b)
{
  P[root(a)] = root(b);
}

inline int answer()
{
  int answer = 0;
  for(size_t i = 0; i < d.size(); ++i){
    if(same(d[i].se.fi,d[i].se.se)){
      unite(d[i].se.fi,d[i].se.se);
	answer += d[i].fi;
    }
  }
  return answer;
}

int main()
{
  init();
  cout << answer() << endl;
  return 0;
}