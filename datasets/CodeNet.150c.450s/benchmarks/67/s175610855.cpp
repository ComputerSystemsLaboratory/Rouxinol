#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while(true)
    {
        scanf("%d", &n);
        
        if(n == 0) break;
        
        int ret = 0;
        
        for(int i = 1; i < n; i++)
        {
            for(int j = 2; j <= n / i; j++)
            {
                int sum = 0;
                
                for(int k = i; k < i + j; k++)
                {
                    sum += k;
                }
                
                if(sum == n) ret++;
            }
        }
        
        printf("%d\n", ret);
    }
    
    return 0;
}