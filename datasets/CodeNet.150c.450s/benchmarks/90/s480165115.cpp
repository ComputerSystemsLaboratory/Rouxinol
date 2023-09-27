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
#include<limits.h>
#include<float.h>
#define foreach(t,p) for(t::iterator it=p.begin();it!=p.end();++it)
#define rforeach(t,p) for(t::reverse_iterator it=p.begin();it!=p.rend();++it)
#define all(p) p.begin,p.end()
using namespace std;
typedef pair<int,int> pp;

int main()
{
    int times[110]={0};
    int n;
    while(cin>>n){times[n]++;if(cin.eof())break;}
    
    set<pp,greater<pp> > kaisu;
    for(int i = 1;i<101;i++)
    {
        kaisu.insert(pp(times[i],i));
    //    cout << i << " "<< times[i] << endl;
    }

    n=(*kaisu.begin()).first;
    set<pp>::iterator pit;
    set<int> outs;
    for(pit=kaisu.begin();(*pit).first==n;++pit)
    {
        outs.insert((*pit).second);
        //cout << (*pit).second << endl;
    }
        //    cout << (*it).second << endl;
        //
    //cout << *(outs.begin()) << endl;
    foreach(set<int>,outs)cout << *it << endl;
    return 0;
}