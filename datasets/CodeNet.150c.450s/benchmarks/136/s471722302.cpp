#include <string>
#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0 || a == b)
        return a;
    else
        return gcd(b,a%b);
}
int lcm(int a, int b)
{
    int g = gcd(a,b);
    return (a / g) * b;
}

int main() {
    int a,b;
    while (cin >> a >> b) {
        cout << gcd(a,b) << " " << lcm(a,b) << endl;
    }
    
    return 0;
}