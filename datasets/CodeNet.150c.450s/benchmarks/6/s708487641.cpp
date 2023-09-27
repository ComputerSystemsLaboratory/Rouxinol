#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d = 0;
  
  cin >> a >> b >> c;
  if(a < b && b < c){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
  