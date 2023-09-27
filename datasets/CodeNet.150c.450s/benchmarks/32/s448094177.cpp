#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

using namespace std;

int main()
{
        int m,ni,na;
        while(cin>>m>>ni>>na,m)
        {
                vector<int> p(m);
                REP(i,m)
                {
                        cin>>p[i];
                }
                sort(p.begin(), p.end());
                int md=0,mp=ni;
                FOR(i, m-na, m-ni+1)
                {
                        if(p[i]-p[i-1]>md)
                        {
                                //cout<<md<<i<<endl;
                                md=p[i]-p[i-1];
                                mp=m-i;
                        }
                }
                cout<<mp<<endl;
        }
}