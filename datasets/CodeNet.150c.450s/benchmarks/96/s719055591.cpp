#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> duo;

#define TT template<typename T>
TT T    sq(T x){ return x*x; }
TT int  ubnd(vector<T>& v,T x){ return upper_bound(v.begin(), v.end(), x) - v.begin(); }
TT int  lbnd(vector<T>& v,T x){ return lower_bound(v.begin(), v.end(), x) - v.begin(); }
TT void sort(T& v){ sort(v.begin(), v.end()); }
TT void revs(T& v){ reverse(v.begin(), v.end()); }
TT void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TT void show(T& v,char d=' ',char e='\n'){for(int i=0;i<v.size();++i)cout<<v[i]<<((i==v.size()-1)?e:d);}
TT void inpt(vector<T>& v,int n){ v.reserve(n);for(int i=0;i<n;++i){T x; cin>>x; v.push_back(x);} }
TT T In(){ T x; cin >> x; return x; }

static inline void fast_io(){ ios::sync_with_stdio(0); cin.tie(0); }
static inline int in(){ int x; scanf("%d", &x); return x; }
static inline string instr(){ string x; cin >> x; return x; }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

vector<string> split(const string& s, char d)
{
  stringstream ss(s);
  vector<string> vs;
  string token;
  while (getline(ss, token, d)) vs.push_back(token);
  return vs;
}

int main()
{
  fast_io();
  vector<string> table;
  table.push_back(".,!? ");
  table.push_back("abc");
  table.push_back("def");
  table.push_back("ghi");
  table.push_back("jkl");
  table.push_back("mno");
  table.push_back("pqrs");
  table.push_back("tuv");
  table.push_back("wxyz");

  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    string s;
    cin >> s;
    vector<string> vs = split(s, '0');
    for (int j = 0; j < vs.size(); j++){
      if (!vs[j].size()) continue;
      int tid = vs[j][0] - '1';
      cout << table[tid][(vs[j].size() - 1) % table[tid].size()];
    }
    cout << "\n";
  }
  return (0);
}