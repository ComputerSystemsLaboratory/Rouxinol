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
    int m, f, r;
  
    while(cin>>m>>f>>r)
    {
        if(m == -1 && f == -1 && r == -1) break;
            else if(m + f >= 80 && m != -1 && f != -1) cout<<"A"<<endl;
            else if(m + f >= 65 && m + f < 80 && m != -1 && f != -1) cout<<"B"<<endl;
            else if(m + f >= 50 && m + f < 65 && m != -1 && f != -1) cout<<"C"<<endl;
            else if(m + f >= 30 && m + f < 50 && r < 50 && m != -1 && f != -1) cout<<"D"<<endl;
            else if(m + f >= 30 && m + f < 50 && r >= 50 && m != -1 && f != -1) cout<<"C"<<endl;
            else if(m + f < 30 && m + f < 80 && m != -1 && f != -1) cout<<"F"<<endl;
            else if(m == -1 || f == -1) cout<<"F"<<endl;
    }
     
    
}
   
int main()
{
    Solution();
    return 0;
}