                      
#include <iostream>
using namespace std;
int main()
{
  int n;
  while(cin >> n && n){
    int	c=0;
    int	i=3;
    while(i<=n){
      if(n%i==0)
        c++;
      i+=2;
    }
    cout << c << endl;
  }
}