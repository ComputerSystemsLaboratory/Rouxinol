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

class Dice
{
    public: 
    int temp1;
    int temp2;
    int a[100];
    
    Dice(int top, int south, int east, int west, int north, int bottom)
    {        
        a[1] = top;
        a[2] = south;
        a[3] = east;
        a[4] = west;
        a[5] = north;
        a[6] = bottom;
    }
    
    void RollS()
    {
            temp1 = a[1];
            temp2 = a[2];
            a[1] = a[5];
            a[2] = temp1;
            a[5] = a[6];
            a[6] = temp2;
    }
    
     void RollN()
    {
            temp1 = a[1];
            temp2 = a[5];
            a[1] = a[2];
            a[2] = a[6];
            a[5] = temp1;
            a[6] = temp2;   
    }
    
     void RollW()
    {
            temp1 = a[1];
            temp2 = a[4];
            a[1] = a[3];
            a[3] = a[6];
            a[4] = temp1;
            a[6] = temp2;
    }
    
     void RollE()
    {
            temp1 = a[1];
            temp2 = a[3];
            a[1] = a[4];
            a[3] = temp1;
            a[4] = a[6];
            a[6] = temp2;
    }
};

void Solution()
{
    int a[100] = {0};
    int n;
    int x, y;
     
    for(int i = 1; i <= 6; i++)
    {
        cin>>a[i];
    }
    
    Dice p(a[1], a[2], a[3], a[4], a[5], a[6]); 
        
    cin>>n;
    
    //???1???2; ?±?3
    
    while(n--)
    {
        cin>>x>>y;
        
       // Dice p = mDice;
        
        if(y == p.a[1]) {p.RollS();}
            else if(y == p.a[3]) {p.RollW(); p.RollS();}
            else if(y == p.a[4]) {p.RollE(); p.RollS();}
            else if(y == p.a[5]) {p.RollS(); p.RollS();}
            else if(y == p.a[6]) {p.RollN();}
        
        if(x == p.a[3]) {p.RollW();}
            else if(x == p.a[4]) {p.RollE();}  // x????????°y????????¢?????\a[2]?????\?????¨??????
            else if(x == p.a[6]) {p.RollE(); p.RollE();}
        
        cout<<p.a[3] <<endl;  
    }
             
}
   
int main()
{
    Solution();
    return 0;
}