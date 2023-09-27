#include <iostream>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <map>
#include <string.h>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
    int n,k;
    while (cin >> n >> k) 
    {
        if (n == 0 && k==0) 
        {
            break;
        }
        vector<int> vec(n);
        int sum_max=0;
        int j;
        int sum=0;
        for (int i = 0; i < n; i++) 
        {
            cin >> vec[i];

            if (k  == i + 1) 
            {
                for (j = 0; j < k; j++) 
                {
                    sum += vec[i - j];
                }
                sum_max = max(sum ,sum_max);
                sum -= vec[i-k+1];
            }
            else if (k  < i + 1) 
            {
                sum += vec[i];
                sum_max = max(sum ,sum_max);
                sum -= vec[i-k+1];
            }
        }
        cout << sum_max << endl;
    }
    return 0;
}