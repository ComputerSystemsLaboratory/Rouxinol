#include <cstdio>

int main()
{
    int n, m, d, p, r[11];
    
    while(true)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        
        if(n == 0 && m == 0) { break; }
        
        for(int i = 0; i < 11; i++)
        {
            r[i] = 0;
        }
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &d);
            scanf("%d", &p);
            
            r[p] += d;
        }
        
        for(int i = 10; i >= 0; i--)
        {
            if(m >= r[i])
            {
                m -= r[i];
                
                r[i] = 0;
            }
            else
            {
                r[i] -= m;
                
                break;
            }
        }
        
        int sum = 0;
        
        for(int i = 0; i <= 10; i++)
        {
            sum += i * r[i];
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}