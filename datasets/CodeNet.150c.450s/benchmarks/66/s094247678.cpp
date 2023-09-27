#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)

int N;
int M;

vector<string> u,t;

set<string> id;

int main(){
  cin >> N;
  u.resize(N);
  rep(i,0,N - 1) cin >> u[i];
  rep(i,0,N - 1) id.insert(u[i]);
  cin >> M;
  string me[] = {"Opened by " , "Closed by "};
  int cou = 0;

  rep(i,0,M - 1){
    string s;
    cin >> s;
    if(!id.count(s)){
      cout << "Unknown " << s << endl;
    }
    else{
      cout << me[cou] << s << endl;
      cou = 1 - cou;
    }
  }
}
