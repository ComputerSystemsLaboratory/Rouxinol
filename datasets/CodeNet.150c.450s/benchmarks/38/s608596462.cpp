#include <iostream>
using namespace std;

int main()
{
  int a, b, c, n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a >> b >> c;
    int tmp;
    if(a < b){
      tmp = a;
      a = b;
      b = tmp;
    }
    if(a < c){
      tmp = a;
      a = c;
      c = tmp;
    }
    (a * a == b * b + c * c) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}