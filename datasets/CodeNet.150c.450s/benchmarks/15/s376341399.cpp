#include <iostream>

using namespace std;

int main(){
  int cnt=0;
  int x;
  cin >> x;
  long s[x];
  for(int i=0;i<x;i++) cin >> s[i];
  int y;
  cin >> y;
  long t[y];
  for(int j=0;j<y;j++){
    cin >> t[j];
    for(int i=0;i<x;i++){
      if(t[j]==s[i]){
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
}