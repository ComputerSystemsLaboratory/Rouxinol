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
    string str;
    cin>>str;
    
    int n;
    cin>>n;
    
    while(n--)
    {
        string rule;
        int a, b;
        string p;
        
        cin>>rule>>a>>b;
        if(rule == "replace")
        {
            cin>>p;
            int j = 0;
            
            for(int i = a; i <= b; i++)
            {
                str[i] = p[j];
                j++;
            }
        }
        else if (rule == "reverse")
        {
            string reverse = str;
            int temp = b;
            for(int i = a; i <= b; i++) 
            {
                str[i] = reverse[temp];  // notice : b+a-j
                //can not use b-- , if use, then can not reverse digit to the end
                temp--;  // or use function "reverse(str.begin() + a, str.begin() + b + 1)"
            }
        }
        else if(rule == "print")
        {
            for(int i = a; i <= b; i++ )
            {
                cout<<str[i];
            }
            cout<<endl;
        }
    }
}
int main()
{
    Solution();
    return 0;
}