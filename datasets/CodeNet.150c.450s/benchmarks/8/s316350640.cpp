#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string hanako;
  string tarou;
  int n;
  int tpoint=0;
  int hpoint=0;
  int i;
  
  cin >> n;
  
  for(i=0;i<n;i++)
  {
    cin >> tarou >>hanako;
    
    if(tarou>hanako)
      tpoint+=3;
    if(hanako>tarou)
      hpoint+=3;
    if(hanako==tarou)
    {
      tpoint++;
      hpoint++;
    }
  }
  cout << tpoint <<" "<< hpoint<<"\n";
}