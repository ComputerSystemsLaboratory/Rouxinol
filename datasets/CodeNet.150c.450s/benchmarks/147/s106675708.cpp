#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, v;
    cin >> n;

    int a[10050] = {0};

    for (size_t i = 1; i <= 104; i++)
    {
        for (size_t j = 1; j <= 104; j++)
        {
            for (size_t k = 1; k <= 104; k++)
            {
                v = i*i + j*j + k*k + i*j + j*k + i*k;
                if(v < 10050)
                    a[v]++;
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i + 1] << "\n";
    }
    
    return 0;
}