#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  string train, a, b, bre, are;
  vector<string> ans;


  cin >> n; 

  for(int i = 0; i < n; i++){
    cin >> train;
    for(int t = 1; t <= (int)train.size(); t++){
      a = train.substr(0,t);
      b = train.substr(t);
      are = a;
      bre = b;
      reverse(are.begin(), are.end());
      reverse(bre.begin(), bre.end());
      ans.push_back(a+b);
      ans.push_back(a+bre);
      ans.push_back(are+b);
      ans.push_back(are+bre);
      ans.push_back(b+a);
      ans.push_back(b+are);
      ans.push_back(bre+a);
      ans.push_back(bre+are);
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    cout << ans.size() << endl;
    ans.clear();

  }



  return 0;
}