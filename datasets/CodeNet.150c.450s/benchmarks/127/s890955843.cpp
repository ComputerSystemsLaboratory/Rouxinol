#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<(n);i++)
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

    rep1(i,t.size()){
      string t1 = t.substr(0,i);
      string t2 = t.substr(i,t.size());

      string F2F1 = t2 + t1; s.insert(F2F1);
      reverse(all(t2));
      string R2F1 = t2 + t1; s.insert(R2F1);
      string F1R2 = t1 + t2; s.insert(F1R2);
      reverse(all(t1));
      string R1R2 = t1 + t2; s.insert(R1R2);
      string R2R1 = t2 + t1; s.insert(R2R1);
      reverse(all(t2));
      string F2R1 = t2 + t1; s.insert(F2R1);
      string R1F2 = t1 + t2; s.insert(R1F2);

    }
    cout << s.size() << endl;
  }
}