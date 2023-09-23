#include <iostream>
using namespace std;
     
int main()
{
    int x,y;
    
    cin >> x;
  
    if((x >= 1) && (x <= 100)) {
       y = x * x * x;
       cout << y << endl;
    }
    else{
       cout << "error" << endl;
    };
  
}