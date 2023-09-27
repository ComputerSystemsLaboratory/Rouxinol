#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    map<int,int>m;
    int n,r;
    cin>>n;
    for(int j=1;j<=100;j++)
    {
        for(int k=1;k<=100;k++)
        {
            for(int h=1;h<=100;h++)
            {
                r=(j*j)+(k*k)+(h*h)+(j*k)+(k*h)+(j*h);
                m[r]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<m[i]<<endl;
    }
    return 0;
}