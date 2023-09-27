#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,result = -100000;
    int num[100005] = {0};
    int memo[100000] = {0};
    while(cin >> n >> m,n + m)
    {
        for(int i = 0; i < n; i++)cin >> num[i];
        for(int i = m-1; i < n; i++)
        {
            memo[i]=0;
            if(i == m-1)
            {
                for(int j = 0; j < m; j++)
                {
                    memo[i] += num[i-j];
                }
            }
            else if(i > m-1)
            {
                memo[i] = memo[i-1] +  num[i] - num[i-m];
            }
        }
        for(int i = m - 1; i < n; i++)
        {
            result = max(result,memo[i]);
        }
        cout << result << endl;
        result = -100005;
    }
    return 0;
}