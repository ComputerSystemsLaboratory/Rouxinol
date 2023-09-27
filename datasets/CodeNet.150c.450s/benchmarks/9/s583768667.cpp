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
    string s;
    int n;
    int m;
    
    while(cin>>s)
    {
        if(s == "-") break;
        
        string left;
        string right;
        
        cin>>n;
    
        while(n--)
        {
            cin>>m;
            
            left = s.substr(0, m); //get the string which from 0, and quantity is m; called s
            right = s.substr(m); //from m to the end
            s = right + left;
        }
        
        cout<<s<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}