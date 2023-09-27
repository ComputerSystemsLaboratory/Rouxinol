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
    int n, m, l;
    long int a[100][100] = {{0}};
    long int b[100][100] = {{0}};
    //long int c[100][100] = {{0}};
    long int sum = 0;
    cin>>n>>m>>l;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    
     for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < l; j++)
        {
            cin>>b[i][j];
        }
    }
    
     for(int i = 0; i < n; i++)
    {
         for(int x = 0; x < l; x++)
         {
            for(int j = 0; j < m; j++)
            {
               sum += a[i][j] * b[j][x];
            }
             if(x == l - 1)
             {
                 cout<<sum;
             }
             else
             {
                cout<<sum<<" ";
             }
             sum = 0;
         }
         
         cout<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}