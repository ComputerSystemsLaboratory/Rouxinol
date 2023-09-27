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
    int r, c;
    int a[150][150] = {{0}};
    int sumC, sumR = 0;
    
    cin>>r>>c;
      
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    
       for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sumC += a[i][j];
        }
         a[i][c] = sumC;
           sumC = 0;
    }
    
        for(int i = 0; i < c + 1; i++)
    {
        for (int j = 0; j < r; j++)
        {
            sumR += a[j][i];
        }
         a[r][i] = sumR;
            sumR = 0;
    }
    
    
    for(int i = 0; i < r + 1; i++)
    {
         for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<a[i][c]<<endl;
    }
  
}
   
int main()
{
    Solution();
    return 0;
}