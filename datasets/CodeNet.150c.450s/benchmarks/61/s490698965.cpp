#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<limits.h>
#define foreach(t,p) for(t::iterator it=p.begin();it!=p.end();p++)
using namespace std;

int main()
{
    int n,a,b,c,x;
    while(cin >>n>>a>>b>>c>>x &&(a||b||c||n||x))
    {
        int y[110];
        for(int i=0;i<n;i++)cin >> y[i];
        int leal=0;
        int j;
        for(j =0;j<10001;j++)
        {
            if(y[leal]==x) {leal++;if(leal==n) break;}
            x = (a*x+b)%c;
        }
    cout << ((j==10001) ? -1 :j)  <<endl;
    }
    return 0;
}