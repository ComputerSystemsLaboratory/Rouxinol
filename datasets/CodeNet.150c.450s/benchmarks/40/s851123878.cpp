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
    int a[100] = {0};
    string direction;
    
    for(int i = 1; i <= 6; i++)
    {
        cin>>a[i];
    }
    cin>>direction;
    
    for(int i = 0; i < (int)direction.size(); i++)
    {
        int temp1 = 0;
        int temp2 = 0;
        
        if(direction[i] == 'S')
        {
            temp1 = a[1];
            temp2 = a[2];
            a[1] = a[5];
            a[2] = temp1;
            a[5] = a[6];
            a[6] = temp2;
        }
        else if(direction[i] == 'N')
        {
            temp1 = a[1];
            temp2 = a[5];
            a[1] = a[2];
            a[2] = a[6];
            a[5] = temp1;
            a[6] = temp2;
        }
        else if(direction[i] == 'W')
        {
            temp1 = a[1];
            temp2 = a[4];
            a[1] = a[3];
            a[3] = a[6];
            a[4] = temp1;
            a[6] = temp2;
        }
        else if(direction[i] == 'E')
        {
            temp1 = a[1];
            temp2 = a[3];
            a[1] = a[4];
            a[3] = temp1;
            a[4] = a[6];
            a[6] = temp2;
        }
    }
    
    cout<<a[1]<<endl;
            
}
  
int main()
{
    Solution();
    return 0;
}