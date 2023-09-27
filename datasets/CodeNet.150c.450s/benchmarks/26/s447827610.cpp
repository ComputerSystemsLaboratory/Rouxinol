#include <iostream>
using namespace std;

int main()
{
  int a,b,bb,c,d = 0;
  
  cin >> a >> b;
  
  if(a < b){
    cout << "a " << "<" << " b" << endl;
  }
  else if(a > b){
    cout << "a " << ">" << " b" << endl;
  }
  else
    cout << "a " << "==" << " b" << endl;
}