#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  int S,s,m,h;
   cin >> S;
   cin >> h;
   cin >> m;
   cin >> s;
  
  h=S/3600;
  m=(S%3600)/60;
  s=S-h*3600-m*60;
  
    cout << h;
    cout << ":";
    cout << m;
    cout << ":";
    cout << s;
    cout << endl;
}

