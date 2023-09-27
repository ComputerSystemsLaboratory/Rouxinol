#include<iostream>
#include<stack>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
    stack<int> s1;

    stack<pair<int,int> > s2;

    char ch[20001];

    cin>>ch;

    int len=strlen(ch);
    int sum=0;

    for(int i=0;i<len;i++)
    {
        if(ch[i]=='\\')
        {
            s1.push(i);
        }else if(ch[i]=='/'&&!s1.empty())
        {
            int area=i-s1.top();
            sum+=area;
            while(!s2.empty()&&s2.top().first>=s1.top())
            {
                area+=s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(s1.top(),area));
            s1.pop();
        }
    }

    cout<<sum<<endl;

    stack<int> ans;
    int cnt=0;

    while(!s2.empty())
    {
        ans.push(s2.top().second);
        cnt++;
        s2.pop();
    }

    cout<<cnt;

    while(!ans.empty())
    {
        cout<<" "<<ans.top();
        ans.pop();
    }

    cout<<endl;


    return 0;
}

