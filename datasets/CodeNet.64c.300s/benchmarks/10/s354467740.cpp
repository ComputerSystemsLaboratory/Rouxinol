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

using namespace std;

void Solution()
{
    int n, m;
    
    while (cin>>n>>m)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        else
        {
            if(n > m)
            {
                int temp;
        
                temp = n;
                n = m;
                m = temp;
            }
        }
        
        cout<<n<<" "<<m<<endl;
    }
}



int main()
{
    Solution();
    return 0;
}