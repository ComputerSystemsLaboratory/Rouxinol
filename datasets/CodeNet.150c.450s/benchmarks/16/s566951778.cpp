#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
#include<cstring>
#define maxn 20005
using namespace std;
int sum=0;
char s[maxn];
stack<int> s1;
stack< pair<int,int> > s2;
vector<int> ans;

int main()
{
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0; i<len; ++i)
    {
        if(s[i]=='/')
        {
            if(!s1.empty())
            {
                int j=s1.top();
                s1.pop();
                int a=i-j;
                sum+=a;
                while(!s2.empty() && j<s2.top().first) //??¨???????????????????????? 
                {
                    a+=s2.top().second;
                    s2.pop();
                }
                s2.push(make_pair(j,a));
            }
        }
        else if(s[i]=='_') continue;
        else s1.push(i);
    }
    while(!s2.empty())
    {
        ans.push_back(s2.top().second);
        s2.pop();
    }
    printf("%d\n%d",sum,ans.size());
    for(int i=ans.size()-1; i>=0; --i)
        printf(" %d",ans[i]);
    printf("\n");
//    for(int i=0; i<len; ++i)
//        if(s[i]=='/')
//            cout<<s[i];
//        else cout<<"-";
    return 0;
}