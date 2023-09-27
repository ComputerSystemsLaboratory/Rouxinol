#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  vector<string> u(257);
  string t;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> u[i];
  }
  cin >> m;
  bool open=false;//opened : true //closed : false
  for(int i=0;i<m;i++){
    cin >> t;
    if(find(u.begin(),u.end(),t)!=u.end()){
      if(open){
        cout << "Closed by " << t << endl;
        open = false;
      }else{
        cout << "Opened by " << t << endl;
        open = true;
      }
    }else{
      cout << "Unknown " << t << endl;
    }
  }
}