#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define eps 1e-6

typedef long long LL;
const double pi = acos(-1.0);
const long long mod = 1e9;
using namespace std;

stack<int> s1;
stack<pair<int,int> > s2;
vector<int> ans;


int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0);
    //freopen("int.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    cin >> s;
    int sum = 0;
    int len = s.size();
    for(int i = 0;i < len;i++)
    {
        if(s[i] == '\\')
            s1.push(i);
        else if(s[i] == '/' && s1.size() > 0)
        {
            int j = s1.top();s1.pop();
            sum += i - j;
            int a = i - j;
            while(s2.size() > 0 && s2.top().first > j)
            {
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j,a));
        }
    }
    while(s2.size() > 0)
    {
        ans.push_back(s2.top().second);
        s2.pop();
    }
    reverse(ans.begin(),ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(int i = 0;i < ans.size();i++)
        cout << ' ' << ans[i];
    cout << endl;
    return 0;
}

