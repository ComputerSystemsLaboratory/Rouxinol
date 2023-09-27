#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> m;
  string str, most, w_ct;


  while (cin >> str){
    m[str]++;
    if (m[most] < m[str]){
      most = str;
    }
    else if(w_ct.size() < str.size()){
      w_ct = str;
    }
  }
  cout << most << ' ' << w_ct << endl;
}