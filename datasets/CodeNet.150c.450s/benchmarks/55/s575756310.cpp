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
    string n;
   
    
    while(cin>>n)
    {
        int sum = 0;
       
        if(n == "0") break;
        
        for(int i = 0; i < (int)n.size(); i++)
        {
            sum += n[i] - '0';
        }
        cout<<sum<<endl;   
    }
    
}
 
int main()
{
    Solution();
    return 0;
}