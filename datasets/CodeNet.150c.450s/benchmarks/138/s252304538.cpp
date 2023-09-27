#include <iostream>

using namespace std;

int main()
{
  int a, b;
  int c;
  cin >> a >> b;

  while(true){
    c = a % b;
    if(c == 0){
      break;
    }
    a = b;
    b = c;
  }
  cout << b << endl;
}