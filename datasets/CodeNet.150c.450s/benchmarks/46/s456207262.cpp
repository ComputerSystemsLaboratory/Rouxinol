#include <iostream>

using namespace std;

int n, x, ways;

int main()
{
    while(true)
    {
        cin >> n >> x;
        
        if(n == 0 && x == 0) { break; }
        
        ways = 0;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                if(x - i - j > j && x - i - j <= n)
                {
                    ways++;
                }
            }
        }
        
        cout << ways << endl;
    }
    
    return 0;
}