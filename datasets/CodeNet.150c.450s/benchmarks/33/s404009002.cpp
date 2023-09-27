#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define F first
#define S second
#define SZ(a) (int)((a).size())
#define pb push_back
#define mp make_pair
#define ALL(a) (a).begin(),(a).end()
using namespace std;

typedef long long ll;
typedef pair<int,int> PI;
typedef unsigned long long ull;

#define PR(...) do{cerr << "line : " << __LINE__ << endl; pr(#__VA_ARGS__, __VA_ARGS__);}while(0);
template<class T>
void pr(const string& name, T t){
  cerr << name << ": " << t << endl;
}

template<typename T, typename ... Types>
void pr(const string& names, T t, Types ... rest) {
  auto comma_pos = names.find(',');
  cerr << names.substr(0, comma_pos) << ": " << t << ", ";
  
  auto next_name_pos = names.find_first_not_of(" \t\n", comma_pos + 1);
  pr(string(names, next_name_pos), rest ...);
}

template<class T,class U> ostream& operator<< (ostream& o, const pair<T,U>& v){return o << "(" << v.F << ", " << v.S << ")";}
template<class T> ostream& operator<< (ostream& o, const vector<T>& v){o << "{";rep(i,SZ(v)) o << (i?", ":"") << v[i];return o << "}";}
template<class T> ostream& operator<< (ostream& o, const set<T> &v){o << "{";for(auto e : v) o << e << ", ";return o << "}";}
template<class T, class U> ostream& operator<< (ostream& o, const map<T,U> &v){o << "{";for(auto e : v) o << e.F << ": " << e.S << ", ";return o << "}";}

//                < v > ^
const int dx[] = {0,1,0,-1};
const int dy[] = {-1,0,1,0};
#define endl '\n'


int main(int argc, char *argv[])
{
  int x, y, s;
  while(cin >> x >> y >> s && x){
    int ans = 0;
    for(int i = 1; i < s; ++i)
      for(int j = 1; j < s; ++j){
	if(i * (100 + x) / 100 + j * (100 + x) / 100 == s){
	  ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
	}
      }
    cout << ans << endl;
  }
  return 0;
}