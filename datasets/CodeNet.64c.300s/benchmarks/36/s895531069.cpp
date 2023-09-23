#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a,b,c;
    int num;
    
    cin >> a >> b >> c;
    
    if(a > b)
    {
        num = b;
        b = a;
        a = num;
    }
    
    if(b > c)
    {
        num = c;
        c = b;
        b = num;
    }
    if(a > b)
    {
        num = b;
        b = a;
        a = num;
    }
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
    
}

