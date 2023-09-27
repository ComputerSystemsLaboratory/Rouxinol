#include <iostream>

using namespace std;

int main()
{
int i;
int a;

for(i=0;i<10000;i++)
  {
    cin >> a;
    if(a==0)
      break;
    cout << "Case " << i+1 << ": " << a <<"\n";
  }
}