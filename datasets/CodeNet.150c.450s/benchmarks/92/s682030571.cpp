#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  int a, b;
  
  while (~scanf("%d%d", &a, &b)){
    stringstream conv;
    conv << a + b;
    cout << conv.str().size() << endl;
  }

  return (0);
}