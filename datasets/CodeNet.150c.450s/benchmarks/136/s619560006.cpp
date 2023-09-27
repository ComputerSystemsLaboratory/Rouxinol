#include <iostream>

using namespace std;

long long gcd(long long a, long long b);
long long lcm(long long a, long long b);

int main()
{
    long long  a, b;
    
    while (cin >> a >> b) {
        if (a < b) {
            long long temp = a;
            a = b;
            b = temp;
        }
        
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    } 
    
    return 0;
}

long long gcd(long long a, long long b)
{
    long long r;

    while ((r = a % b) != 0) {
        a = b;
        b = r;
    }

    return b;
}

long long lcm(long long a, long long b)
{
    return (a * b / gcd(a,  b));
}
    