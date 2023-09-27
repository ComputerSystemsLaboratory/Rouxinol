#include<iostream>
using namespace std;
int main(){
  int a, b, c, buf;
  int n;
  bool x[1000];
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a >> b >> c;
    if(c > b){
      buf = c;
      c = b;
      b = buf;
    }
    if(b > a){
      buf = b;
      b = a;
      a = buf;
    }
    if(a*a==b*b+c*c)
      x[i] = 1;
    else
      x[i] = 0;
  }
  for(int i = 0; i < n; i++){
    if(x[i] == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}