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

int a[4][3][10] = {};

void Calculate()
{
   for(int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           for(int m = 0; m < 10; m++)
           {
               cout<<" "<<a[i][j][m];
           }
           
           cout<<endl;
       }
       
       if(i < 3)
       {
        cout<<"####################"<<endl;
       }
   }
}
 
void Solution(int n)
{
   for(int i = 0; i < n; i++)
   {
       int d, f, r, v;
       
       cin>>d>>f>>r>>v;
       
       a[d - 1][f - 1][r - 1] += v;
       
   }
   
}
 
int main()
{
    int n ;
    cin>>n;
    Solution(n);
    Calculate();
    return 0;
}