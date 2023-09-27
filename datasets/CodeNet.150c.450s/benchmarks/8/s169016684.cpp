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
    string taro, hanako;
    int sTaro = 0; 
    int sHanako = 0;
    
    int n;
    
    cin>>n;
    while(n--)
    {
        cin>>taro>>hanako;
        
        if(taro > hanako) //alphabet comparison is based on ASC||
        {
            sTaro += 3; 
        }
        else if (taro == hanako)
        {
            sTaro++;
            sHanako++;
        }
        else
        {
            sHanako += 3;
        }
    }
    
    cout<<sTaro<<" "<<sHanako<<endl; 
}

int main()
{
    Solution();
    return 0;
}