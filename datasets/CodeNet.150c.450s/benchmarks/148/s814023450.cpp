#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int test,i,j,ac=0,wa=0,tle=0,re=0;
    string ch;
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>ch;
        if(ch=="AC")
        {
            ac+=1;
        }
        else if(ch=="WA")
        {
            wa+=1;
        }
         else if(ch=="TLE")
        {
            tle+=1;
        }
        else if(ch=="RE")
        {
            re+=1;
        }


    }
    cout<<"AC"<<" "<<"x"<<" "<<ac<<endl<<"WA"<<" "<<"x"<<" "<<wa<<endl<<"TLE"<<" "<<"x"<<" "<<tle<<endl<<"RE"<<" "<<"x"<<" "<<re<<endl;;

    return 0;


}
