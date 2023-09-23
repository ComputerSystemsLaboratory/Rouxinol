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
    int n, m;
    int a[100][100] = {{0}};
    int b[100] = {0};
    int sum = 0;
    
    cin>>n>>m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }

    }
    
    for(int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
             sum += b[j] * a[i][j];
        }
        
        cout<<sum<<endl;
        sum = 0;
        
    }
        
}
  
int main()
{
    Solution();
    return 0;
}