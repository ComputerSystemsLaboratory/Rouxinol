#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;

  while(cin >> n, n){
    char t[128];
    fill(t, t + 128, -1);

    for(int i = 0; i < n; i++){
      char a, b;
      cin >> a >> b;
      t[a] = b;
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++){
      char ch;
      cin >> ch;
      cout << (t[ch] != -1 ? t[ch] : ch);
    }
    cout << endl;
  }
}