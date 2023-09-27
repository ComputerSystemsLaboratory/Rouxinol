#include<iostream>
#include<map>
using namespace std;
map<string,int>mp;
string ans,s,amins;
int maxn=0,minn=0;
int main()
{
    while(cin>>s)
    {
        mp[s]++;
        if(mp[s]>maxn)
        {
                      maxn=mp[s];
                      ans=s;
        }
        if(s.size()>minn)
        {
                         minn=s.size();
                         amins=s;
        }
    }
    cout<<ans<<" "<<amins<<endl;
    return 0;
} 