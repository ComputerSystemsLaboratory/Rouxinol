#include<bits/stdc++.h>
using namespace std;
int main()
{int  n,x,q,y;
long long sum = 0;
cin>>n;
map<int ,int> mp;
for(int i = 0;i<n;i++)
{
    cin>>x;
    mp[x]++;
    sum+=x;
}
cin>>q;
vector<pair<int ,int>> p;
for(int i = 0;i<q;i++)
{
cin>>x>>y;
p.push_back(make_pair(x,y));
}
for(int i = 0;i<q;i++)
{
    if(mp.find(p[i].first)!=mp.end())
    {
           int count =  mp[p[i].first];
           mp[p[i].first]  =0 ;
           mp[p[i].second] += count;
           sum+=count*(p[i].second-p[i].first);
        cout<<sum<<endl;
    }
    else
    cout<<sum<<endl;
}

// cout<<s<<endl;
    return 0;
}