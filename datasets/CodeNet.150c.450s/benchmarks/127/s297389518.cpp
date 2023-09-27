#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<cassert>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n;
  cin >> n;
  for(int l=0; l<n; l++){
    vector<string> ans;
    string s;
    cin >> s;
    int p = s.size();
    for(int i=1; i<p; i++){
      string a = s.substr(0, i);
      string b = s.substr(i, p-i);
      string na = a;
      string nb = b;
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
      string ra = a;
      string rb = b;
      ans.push_back( na + nb );
      ans.push_back( na + rb );
      ans.push_back( ra + nb );
      ans.push_back( ra + rb );
      ans.push_back( nb + na );
      ans.push_back( nb + ra );
      ans.push_back( rb + na );
      ans.push_back( rb + ra );
    }
    sort(ans.begin(), ans.end());
    ans.push_back("");
    long long int cnt = 0;
    for(int i=0; i<ans.size()-1; i++){
      if( ans[i] != ans[i+1] ) cnt++;
    }
    cout << cnt << endl;
  }

  return 0;
}


// EOF