#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<numeric>
#include<vector>
#include<cstdio>
#include<climits>
#include<cfloat>
#include<cstring>
#define rforeach(t,p) for(t::reverse_iterator it=p.rbegin();it!=p.rend();++it)
#define all(p) p.begin(),p.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define foreach(t,p,tit) for(t::iterator tit=p.begin();tit!=p.end();++tit)
using namespace std;

int main()
{
    int n=0,maxn=0,maxlen=0;
    string ss,maxs="",maxns;
    map<string,int > tango;
    map<string,int>::iterator it;
    while(cin>>ss)
    {
        if(maxlen <ss.size())
        {
            maxlen = ss.size();
            maxs = ss;
        }

        it = tango.find(ss);
        if(it==tango.end())
        {
            tango.insert(map<string,int>::value_type(ss,1));
        }
        else
        {
            n = (*it).second+ 1;
            tango.erase(it);
            tango.insert(map<string,int>::value_type(ss,n));
            maxn = max(n,maxn);
        }
    }
    for(map<string,int>::iterator it2=tango.begin();it2!=tango.end(); ++it2)
        if( (*it2).second == maxn){cout << (*it2).first; break;}

    cout << " " << maxs << endl;
    return 0;
}