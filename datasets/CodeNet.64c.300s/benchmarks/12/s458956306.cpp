#include <iostream>
using namespace std;

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x = 0;
    cin >> x;
    cout << cube(x) << endl;
    
    return 0;
}