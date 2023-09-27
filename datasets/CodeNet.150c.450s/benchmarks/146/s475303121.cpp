#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
          float x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d,e,f,g,h,i;
          cin>>a;
          for(i=0;i<a;i++)
          {
                    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
                    b=((y2-y1)/(x2-x1));
                    c=((y4-y3)/(x4-x3));
                    if(b==c)
                              cout<<"YES\n";
                    else
                              cout<<"NO\n";
          }
return 0;
}

