#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  string s,f,p,t;
  cin >> s;
  int q,i,a,b;
  cin >> q;
  for (i=0;i<q;i++) {
    cin >> f >> a >> b;
    if (f=="print") {
      cout << s.substr(a, b-a+1) << endl;
    } else if (f=="reverse") {
      t=s.substr(a, b-a+1);
      reverse(t.begin(), t.end());
      s= s.substr(0, a) + t + s.substr(b+1,s.length() -b-1);
    } else {
      cin >> p;
      s= s.substr(0, a) + p + s.substr(b+1,s.length() -b-1);
    }
  }
  return 0;
}

