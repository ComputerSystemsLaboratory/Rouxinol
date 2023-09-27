#include <bits/stdc++.h>
using namespace std;
int main() {
 int a,b;
 cin >> a >> b;
  int c[a];
  for(int i = 0;i<a;i++){
    cin >> c[i];
  }
  for(int i = b;i<a;i++){
    if(c[i]>c[i-b]) cout << "Yes" <<endl;
    else cout << "No" << endl;
  }
}
