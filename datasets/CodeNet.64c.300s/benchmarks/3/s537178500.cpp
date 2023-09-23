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
    int n;
    int a[1000] = {0};
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i = n - 1; i > 0; i--)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<a[0]<<endl;
     
     
}
 
int main()
{
    Solution();
    return 0;
}