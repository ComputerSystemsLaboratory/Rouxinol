#include <iostream>
#include <set>
using namespace std;
set<string> memo;
string reverse(string s)
{
  string ret = s;
  for(int i=0; i<s.length(); i++){
    ret[i] = s[s.length()-i-1];
  }
  return ret;
}
int main()
{
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    memo.clear();
    string s;
    cin >> s;
    memo.insert(s);
    for(int j=1; j<s.length(); j++){
      string s1 = s.substr(0,j);
      string s2 = s.substr(j);
      string revs1 = reverse(s1);
      string revs2 = reverse(s2);
      memo.insert(s1+revs2);
      memo.insert(s2+s1);
      memo.insert(s2+revs1);
      memo.insert(revs1+s2);
      memo.insert(revs1+revs2);
      memo.insert(revs2+s1);
      memo.insert(revs2+revs1);
    }
    cout << memo.size() << endl;
  }
  return 0;
}