#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; scanf("%d", &n);
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    vector<int> dp; dp.push_back(a[0]);
    
    for(int i = 1; i < n; i++)
    {
        if(dp[dp.size() - 1] < a[i])
        {
            dp.push_back(a[i]);
        }
        else
        {
            int pos = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
            
            dp[pos] = a[i];
        }
    }
    
    printf("%d\n", (int)(dp.size()));
    
    return 0;
}