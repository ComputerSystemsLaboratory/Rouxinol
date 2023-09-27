#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  string u,t;
  set<string> id;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> u;
    id.insert(u);
  }

  cin >> m;
  bool isOpen = false;
  for(int i=0;i<m;i++){
    cin >> t;
    if(id.count(t)){
      if(isOpen)cout << "Closed by " << t << endl;
      else cout << "Opened by " << t << endl;
      isOpen = !isOpen;
    }else cout << "Unknown " << t << endl;
  }
}