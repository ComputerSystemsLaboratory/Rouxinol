#include <iostream>
using namespace std;

void compareValue(int a, int b, int c)
{
    cout << ((a < b && b < c) ? "Yes" : "No") << endl;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    compareValue(a, b, c);
    
    return 0;
}