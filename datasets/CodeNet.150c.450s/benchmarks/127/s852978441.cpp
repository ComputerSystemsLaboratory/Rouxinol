#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while(n--){
    set<string> district;
    string train;
    cin >> train;
    for(int i = 0; i < train.size(); i++){
      string f = train.substr(0, i);
      string b = train.substr(i, train.size() - i);
      reverse(f.begin(), f.end());
      district.insert(f + b);
      district.insert(b + f);
      reverse(b.begin(), b.end());
      district.insert(f + b);
      district.insert(b + f);
      reverse(f.begin(), f.end());
      district.insert(f + b);
      district.insert(b + f);
      reverse(b.begin(), b.end());
      district.insert(f + b);
      district.insert(b + f);    
    }
    cout << district.size() << endl;
  }
  return 0;
}