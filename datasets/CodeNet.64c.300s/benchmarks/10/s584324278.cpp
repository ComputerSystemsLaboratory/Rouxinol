#include <iostream>
using namespace std;

void replace(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 0, b = 0;
    while(true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)   break;
        
        if (a > b)  replace(a, b);
        cout << a << " " << b << endl;
    }
    
    return 0;
}