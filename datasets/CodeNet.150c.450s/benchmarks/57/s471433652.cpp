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
    char op;
    
    int a, b;
    int c;
    
    while(cin>>a>>op>>b)
    {
        if (op == '+' )
        {
            c = a + b;
        }
        else if (op == '-')
        {
            c = a - b;
        }
        else if (op == '*')
        {
            c = a * b;
        }
        else if (op == '?')
        {
            break;
        }
        else
        {
            c = a / b;
        }
        
        cout<<c<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}