#include <iostream>
using namespace std;
int main()
{
      int indata;
      cin>> indata;
      if(indata>=1 && indata<=100)
           cout <<indata*indata*indata << endl;
      else cout <<"input error"<<endl;
      return 0;

}