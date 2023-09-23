#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    int a,b,c;
    int temp;
    cin >> a >> b >> c;
    if(a<b){
      temp = a;
      a = b;
      b = temp;
    }
    if(a<c){
      temp = a;
      a = c;
      c = temp;
    }

    if( a*a == b*b + c*c ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}