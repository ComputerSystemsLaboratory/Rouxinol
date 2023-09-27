#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int A[40000] = {0};

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i < 110; ++i)
    {
        for (int j = 1; j < 110; ++j)
        {
            for (int k = 1; k < 110; ++k)
            {

                int temp = i * i + j * j + k * k + i * j + j * k + k * i;
                if (temp <= 10010)
                {
                    ++A[temp];
                }
                // cout << temp << " " << i << j << k << endl;
            }
        }
    }
    for (int i = 1; i <= N; ++i)
    {
        cout << A[i] << endl;
    }
}
