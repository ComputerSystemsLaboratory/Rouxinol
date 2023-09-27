#include <iostream>
#include <string>
#include <set>

using namespace std;

string rev(string s)
{
  string rs;
  for(unsigned int i=0;i<s.length();i++){
    rs.append(1,s[s.length() - 1 - i]);
  }
  return rs;
}

int main(void)
{
  int a;
  cin >> a;
  string s;
  for(int k=0;k<a;k++){
    cin >> s;
    set<string> v;
    for(unsigned int i=1;i<s.length();i++){
      string s1,s2;
      for(unsigned int j = 0;j < i;j++){
        s1.append(1,s[j]);
      }
      for(unsigned int j = 0;j < s.length() - i;j++){
        s2.append(1,s[j+i]);
      }
      v.insert(s1+s2);
      v.insert(s2+s1);
      v.insert(rev(s1)+s2);
      v.insert(s2+rev(s1));
      v.insert(s1+rev(s2));
      v.insert(rev(s2)+s1);
      v.insert(rev(s1)+rev(s2));
      v.insert(rev(s2)+rev(s1));
    }

    cout << v.size() << endl;
  }

  return 0;
}