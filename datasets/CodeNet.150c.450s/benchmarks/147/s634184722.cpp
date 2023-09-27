#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int func(int n)
{
    int count = 0;
    int sqrt_n = sqrt(n);

    for (int x = 1; x < sqrt_n; x++)
    {
        for (int y = 1; y < sqrt_n; y++)
        {
            for (int z = 1; z < sqrt_n; z++)
            {
                if (x * x + y * y + z * z + x * y + y * z + z * x == n)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << func(i + 1) << endl;
    }
    return 0;
}