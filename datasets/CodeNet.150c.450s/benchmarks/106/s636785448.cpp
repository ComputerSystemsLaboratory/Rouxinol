#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  int num;
  cin >> a >> b >> c;
  
  for(int x = a; x <= b; x++){
    if(c%x == 0)num++;
  }

  cout << num << '\n';
}