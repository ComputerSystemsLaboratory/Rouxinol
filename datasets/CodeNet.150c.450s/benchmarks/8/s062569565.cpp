#include <iostream>

using namespace std;

int main(){
  int n,i,tn=0,hn=0;
  cin >> n;
  string t,h;
  for (i=0;i<n;i++) {
    cin >> t >> h;
    if (t == h) {
      tn+=1;
      hn+=1;
    } else if (t > h) {
      tn+=3;
    } else {
      hn+=3;
    }
  }
  cout << tn << " " << hn << endl;
  return 0;
}

