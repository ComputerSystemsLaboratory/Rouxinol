#include <iostream>
using namespace std;
      
      
int main()
{
      int a,b,c,n,index;
      
      index = 0; 
      cin >> n; 
      while(1)
      {
           cin >> a >> b >> c;       
           if( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))     
                   cout << "YES" << endl;
           else
                   cout << "NO" << endl;
           
          if(index == n-1)
                   break;     
      
          index++;
     }
      
     return 0;
}