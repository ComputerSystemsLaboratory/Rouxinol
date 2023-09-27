#include <iostream>
using namespace std;
  
int main()
{
    double a, b;
    cin >> a >> b;
  
    if(-1000 <= a && b <= 1000)
    {
        if(a < b)
            cout << "a < b" << endl;
  
        else if(a > b)
                cout << "a > b" << endl;
  
             else if(a = b)
                    cout << "a == b" << endl;
    }
      
    return 0;
}