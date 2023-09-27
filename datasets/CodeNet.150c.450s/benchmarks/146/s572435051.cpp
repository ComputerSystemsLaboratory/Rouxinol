//
//  practise.h
//  c++practise
//
//  Created by Ubnit04 on 2015/06/10.
//
//
#include <iostream>

using namespace std;

void Solution()
{
    int n;
    
    cin>>n;
    
    while(n--)
    {
        float x1, y1;
        float x2, y2;
        float x3, y3;
        float x4, y4;
        
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        
        float ab = (y2 - y1) / (x2 - x1); // when "y / x = " another line's data, it can be seen as parallel
        float cd = (y4 - y3) / (x4 - x3);
        
        if (ab == cd )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    Solution();
    return 0;
}