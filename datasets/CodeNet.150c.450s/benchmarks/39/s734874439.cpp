#include <iostream>
using namespace std;

int main()
{
    int a, b, area, circumference;
    
    cin >> a >> b;
    
    area = a * b;
    circumference = (a + b) * 2;
    
    cout << area << " " << circumference << endl;
    
    return 0;
}