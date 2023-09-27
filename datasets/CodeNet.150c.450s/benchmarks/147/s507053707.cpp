#include<cstdio>
#include<string>
#include<iostream>

using namespace std;
const int N = 1e4 + 10;

int res[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i *i < n; ++i)
    {
        int sum = i * i;
        for(int j = 1; j *j + sum < n; ++j)
        {
            sum += j * j;
            for(int k = 1; k *k + sum < n; ++k)
            {
                sum += k * k;
                sum += i * j + i * k + j * k;

                if(sum <= n)res[sum]++;

                sum -= k * k;
                sum -= i *j + i * k + j * k;
            }
            sum -= j * j;
        }
    }

    for(int i = 1; i <= n; ++i)cout << res[i] << endl;
    return 0;
}
