#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>
#include <valarray>
#include<stack>
#include<sstream>
#include<math.h>
   
using namespace std;
    
void Solution()
{
    int n, x;
  
    while(cin>>n>>x)
    {
        int count = 0;
        
        if(n == 0 && x == 0) break;
        
        for(int a = 1; a <= n; a++)
        {
            for(int b = a + 1; b <= n; b++)
            {
                for(int c = b + 1; c <= n; c++)
                { 
                    if(a + b + c == x) count++;
                }
            }
        }
        
        cout<<count<<endl;
    }

}
   
int main()
{
    Solution();
    return 0;
}