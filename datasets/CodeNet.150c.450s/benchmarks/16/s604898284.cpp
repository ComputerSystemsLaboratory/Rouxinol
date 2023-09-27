#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include <cstdio>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
#include<list>
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int to,cost;};
double pi = 3.141592653589793;
//使うやつはここから下に置こうな
signed main(){
    string s;cin>>s;
    stack<int> st;
    stack<P> s2;
    int sum=0;
    rep(i,0,s.size()){
        if(s[i]=='_')continue;
        else if(s[i]=='/'){
            if(!st.empty()){
                int j=st.top();
                st.pop();
                int a=i-j;
                sum+=a;
                while(s2.size()>0&&s2.top().first>j){
                    a+=s2.top().second;s2.pop();
                }
                s2.push(make_pair(j,a));
            }
        }
        else st.push(i);
    }
    vector<int> ans;
    while(s2.size()){
        ans.push_back(s2.top().second);s2.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<sum<<endl;
    cout<<ans.size();
    rep(i,0,ans.size())cout<<" "<<ans[i];cout<<endl;
    return 0;
}
