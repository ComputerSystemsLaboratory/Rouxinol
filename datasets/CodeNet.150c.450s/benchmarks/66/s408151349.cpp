#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> key(n);
  for(int i = 0; i < n; i++)cin >> key[i];

  int m;
  cin >> m;
  bool locked = true;
  bool change;
  string in;
  for(int i = 0; i < m; i++){
    change = false;
    cin >> in;
    for(int j = 0; j < n; j++){
      if(in == key[j]){
        locked = !locked;
        change = true;
        break;
      }
    }
    if(change){
      if(locked)cout << "Closed by " << in << endl;
      else cout << "Opened by " << in << endl;
    }else{
      cout << "Unknown " << in << endl;
    }
  }

}