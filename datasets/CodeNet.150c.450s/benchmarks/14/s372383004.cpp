#include <iostream>

using namespace std;

bool san(u_int n)
{
    if (n % 3 == 0)
        return true;
    
    while (n) {
        if (n % 10 == 3)
            return true;
        n /= 10;
    }

    return false;
}

int main(void)
{
    u_int n;
    cin >> n;

    for (u_int i = 1; i <= n; i++)
        if (san(i))
            printf(" %d", i);
    puts("");
    
    return 0;
}