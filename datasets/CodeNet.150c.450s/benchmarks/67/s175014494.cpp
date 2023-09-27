#include<iostream>

int consecutive_sum (int n)
{
    int cnt = 0;
    int max = n / 2;

    for (int i = 1; i <= max; i++)
    {
        int total = i;

        for (int j = i; total <= n; total += ++j)
        {

            if (total == n)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main ()
{
    int n = 0;
    while (std::cin >> n, n != 0)
    {
        std::cout << consecutive_sum (n) << std::endl;
    }

    return 0;
}