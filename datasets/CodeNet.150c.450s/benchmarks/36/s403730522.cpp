#include <iostream>

using namespace std;


unsigned long long f(unsigned long long x)
{
    return x*x;
}

int main()
{
    int d;
    while(cin >> d) {
        unsigned long long s = 0;
        for(int i = d; i <= 600 - d; i += d) s += d * f(i);
        cout << s << endl;
    }
    return 0;
}