// ITP1_8_D

#include<iostream>
#include<string>
using namespace std;

int main(){
  string s, p;
  bool res = true;
  cin >> s >> p;

  for (int i=0;i<s.size();i++) {
    res = true;
    for (int j=0;j<p.size();j++)
      if (s[(i + j) % s.size()] != p[j])
        res = false;
    if (res)
      break;
  }

  if (res)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

