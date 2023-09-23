#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) 
    {
        int x = i;
        
        if (i % 3 == 0)
        {
            std::cout << " " << i;
        }
        else
        {
            while (x)
            {
                if (x % 10 == 3)
                {
                    std::cout << " " << i;
                    x = 0;
                }
                
                x /= 10;
            }
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
