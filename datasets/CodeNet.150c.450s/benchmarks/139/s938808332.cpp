#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n>>j;
    unordered_map<int,vector<int>> m;
    for(int i=0;i<j;i++)
    {
        int a,b;
        cin>>a>>b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    vector<int> ans(n+1,0);
    int count=0;
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int s=q.size();
        for(int k=0;k<s;k++)
        {
            int front=q.front();
            q.pop();
            int a=m[front].size();
            for(int i=0;i<a;i++)
            {
                if(ans[m[front][i]]!=0||m[front][i]==1)
                    continue;
                ans[m[front][i]]=front;
                count++;
                q.push(m[front][i]);
            }
        }
    }
    if(count!=n-1)
    {
        cout<<"No"<<endl;
    }else
    {
        cout<<"Yes"<<endl;
        for(int i=2;i<=n;i++)
        {
            cout<<ans[i]<<endl;
        }
    }
}