#include <iostream>
using namespace std;

int main()
{
  int a,b;
  string str;
      
  for(int i=0; ;i++){

    cin >> a >> str >> b;

    if(str=="?") break;
    if(str=="+"){
      cout << a + b << endl;
    } else if(str=="-"){
      cout << a - b << endl;
    } else if(str=="*"){
      cout << a * b << endl;
    } else if(str=="/"){
      if(b==0) break;
      cout << a / b << endl;
    }
  } 

  return 0;
}