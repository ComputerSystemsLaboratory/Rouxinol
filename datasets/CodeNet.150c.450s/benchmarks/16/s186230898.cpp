#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <set>
#include <map>
#define sf scanf
#define pf printf
#define show(x) cout<<"x:"<<x<<endl;
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
const int inf=1e9;
stack<int>s1;
stack<pair<int,int> >s2;
int main()
{
    char ch;
    ll sum=0;
    for(int i=0;cin>>ch;i++)
    {
        if(ch=='\\')
            s1.push(i);
        else if(ch=='/'&&!s1.empty())
        {
            int j=s1.top();
            int a=i-j;
            s1.pop();
            sum+=a;
            while(!s2.empty()&&s2.top().first>j)
            {
                a+=s2.top().second,s2.pop();
            }
            s2.push(make_pair(j,a));
        }

    }
    vector<int>ans;
    while(s2.size()>0){ans.push_back(s2.top().second),s2.pop();}
    reverse(ans.begin(),ans.end());
    cout<<sum<<endl;
    cout<<ans.size();
    for(int i=0;i<ans.size();i++)
    {
        cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}

