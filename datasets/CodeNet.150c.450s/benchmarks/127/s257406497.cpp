#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
typedef pair<string, string> PSS;

string reverse(string str) { 
  reverse(str.begin(), str.end()); 
  return str;
}

PSS separate(string str, int n) {
  return PSS( str.substr(0, n), str.substr(n)); }

PSS reverse_car(PSS pss) { return PSS(reverse(pss.first), pss.second); }

PSS reverse_cdr(PSS pss) { return PSS(pss.first, reverse(pss.second));}

PSS reverse_car_cdr(PSS pss) { return reverse_car(reverse_cdr(pss)); }

string concat(PSS pss) { return pss.first + pss.second; }

PSS swap_pps(PSS pss) { return PSS(pss.second, pss.first); }

vector<string> rearrange(string str, int n) {
  PSS pss = separate(str, n), ssp = swap_pps(pss);
  vector<string> ans;

  ans.push_back(concat(reverse_car(pss)));
  ans.push_back(concat(reverse_cdr(pss)));
  ans.push_back(concat(reverse_car_cdr(pss)));
  ans.push_back(concat(ssp));
  ans.push_back(concat(reverse_car(ssp)));
  ans.push_back(concat(reverse_cdr(ssp)));
  ans.push_back(concat(reverse_car_cdr(ssp)));

  return ans;
}

set<string> accumulate(string str) {
  set<string> ans;
  ans.insert(str);
  ans.insert(reverse(str));
  for (int i = 1, len = str.length(); i < len; i++) {
    vector<string> vs = rearrange(str, i);
    REP(j, vs.size()) {
      ans.insert(vs[j]);
    }
  }
  return ans;
}

int main() {
  int m;
  cin >> m;
  REP(M, m) {
    string str;
    cin >> str;

    cout << accumulate(str).size() << endl;
  }
}