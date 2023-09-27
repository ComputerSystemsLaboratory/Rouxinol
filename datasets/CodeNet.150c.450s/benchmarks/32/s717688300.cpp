#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <utility>
#include <stack>
#include <queue>
#include <iomanip>
#include <cctype>
using namespace std;
typedef long long ll;
int main()
{
    int m,nmin,nmax;
    cin>>m>>nmin>>nmax;
    while(m&&nmin&&nmax)
    {
        vector<int> p(m);
        for(int i=0;i<m;i++)
        {
            cin>>p[i];
            
        }
        int cmax=-1;
        int ci=0;
        for(int i=nmax;i>=nmin;i--)
        {
            int t=p[i-1]-p[i];
            if(cmax<t)
            { cmax=t;
                ci=i;
                }
        }
            cout<<ci<<endl;
        cin>>m>>nmin>>nmax;
    }
    
    
    return 0;
}

