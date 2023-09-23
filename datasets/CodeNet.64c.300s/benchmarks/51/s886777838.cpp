#include <iostream>

using namespace std;

long factorial(long n)
{
    if (n == 0) return 1;
    
    return n * factorial(n - 1);
}

int main()
{
    long n;
    
    cin >> n;
    
    cout << factorial(n) << endl;
}