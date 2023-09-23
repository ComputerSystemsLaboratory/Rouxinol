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
    bool a[5][14] = {{0}};
    char pattern;
    int digit;
    
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>pattern>>digit;
        
        switch(pattern)
        {
            case 'S': a[0][digit - 1] = true; break;
            case 'H': a[1][digit - 1] = true; break;
            case 'C': a[2][digit - 1] = true; break;
            case 'D': a[3][digit - 1] = true; break;
        }
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
             if( false == a[i][j] ) 
             {
                switch( i ) 
                {
                    case 0: cout <<"S "<<j + 1<<endl; break;
                    case 1: cout <<"H "<<j + 1<<endl; break;
                    case 2: cout <<"C "<<j + 1<<endl; break;
                    case 3: cout <<"D "<<j + 1<<endl; break;
                }
            }
        }
    }
     
     
}
 
int main()
{
    Solution();
    return 0;
}