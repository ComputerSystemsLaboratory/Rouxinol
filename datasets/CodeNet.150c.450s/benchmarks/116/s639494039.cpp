#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    
    while(true)
    {
        scanf("%d", &n);
        scanf("%d", &k);
        
        if(n == 0 && k == 0) { break; }
        
        vector<int> a(n);
    
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        int sum = 0;
        
        for(int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        
        int ret = sum;
        
        for(int i = k; i < n; i++)
        {
            sum += (a[i] - a[i - k]);
            
            ret = max(ret, sum);
        }
        
        printf("%d\n", ret);
    }
    
    return 0;
}