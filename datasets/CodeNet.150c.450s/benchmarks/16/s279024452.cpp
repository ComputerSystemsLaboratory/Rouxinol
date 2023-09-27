#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    stack<int> S1;
    stack<pair<int,int> > S2;
    string s;
    int i,sum=0;
    cin>>s;
    int len=s.length();
    for(i=0;i<len;i++){
        if(s[i]=='\\')S1.push(i);
        else if(s[i]=='/' && S1.size()>0){
            int j=S1.top();
            S1.pop();
            sum+=i-j;
            int a=i-j;
            while(S2.size()>0&&S2.top().first>j){
                a+=S2.top().second;
                S2.pop();
            }
            S2.push(make_pair(j,a));
        }
    }

    cout<<sum<<endl;
    vector<int> ans;
    while(S2.size()>0){
        ans.push_back(S2.top().second);
        S2.pop();
    }
    cout<<ans.size();
    reverse(ans.begin(),ans.end());
    for(i=0;i<ans.size();i++){
        cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}