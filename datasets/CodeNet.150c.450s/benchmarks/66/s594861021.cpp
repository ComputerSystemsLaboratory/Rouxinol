#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0;i<n;i++){
    cin >> s[i];
  }
  int m;
  cin >> m;
  string t;
  bool closed = true;
  bool flag;
  for(int i=0;i<m;i++){
    cin >> t;
    flag=false;
    for(int j=0;j<n;j++){
      if(t==s[j]){
        closed=(!closed);
        cout << (closed?"Closed by ":"Opened by ") <<
            t << endl;
        flag=true;
      }
    }
    if(!flag){
      cout << "Unknown " << t << endl;
    }
  }
  return 0;
}

