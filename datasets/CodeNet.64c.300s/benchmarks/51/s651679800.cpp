#include <iostream>

long fact(int n);

int main()
{
    int n;
    std::cin >> n;

    std::cout << fact(n) << std::endl;

    return 0;
}

long fact(int n)
{
    long ans = 1;
    while (n--) {
        ans *= (n + 1);
    }

    return ans;
}