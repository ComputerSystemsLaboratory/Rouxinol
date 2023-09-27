#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

int main(){
  int m;
  scanf("%d",&m);
  while(m-->0){
    set <string> s;
    string t;
    cin >> t;

    s.insert(t);
    reverse(all(t));
    s.insert(t);
    reverse(all(t));
    int len=t.size();
    for(int i=1;i<len;i++){
      string t1 = t.substr(0,i);
      string t2 = t.substr(i,t.size());
      
      s.insert(t2+t1);
      reverse(all(t2));
      s.insert(t2+t1);
      s.insert(t1+t2);
      reverse(all(t1));
      s.insert(t1+t2);
      s.insert(t2+t1);
      reverse(all(t2));
      s.insert(t2+t1);
      s.insert(t1+t2);
    }
    cout << s.size() << endl;
  }
}