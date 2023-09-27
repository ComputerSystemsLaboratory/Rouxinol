#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(ll i=0; i<(ll)(n); i++)
#define FOR(i,n,m) for (ll i=n; i<(ll)(m); i++)
#define pb push_back
#define INF 1000000007LL
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int,int> p;

int dy[4]={-1,1,0,0};
int dx[4]={0,0,1,-1};

string s;

int main(){
    ios::sync_with_stdio(false);
    cin >> s;
    stack<int> st;
    stack<p> st2;
    int sum =0;
    for(int i=0; i < s.size(); i++){
        if(s[i]=='\\'){
            st.push(i);
        }
        else if(s[i]=='/' & st.size()>0){
            int j=st.top();st.pop();
            sum+=i-j;
            int a=i-j;
            while(st2.size() > 0 && st2.top().first>j){
                a+=st2.top().second;st2.pop();
            }
            st2.push(make_pair(j,a));
        }
    }
    
    vector<int> ans;
    int t=0;
    while(st2.size()){ans.pb(st2.top().second);st2.pop();}
    reverse(ans.begin(),ans.end());
    cout << sum << endl;
    cout << ans.size();
    REP(i,ans.size()){
        cout << " ";
        t+=ans[i];
        cout << ans[i];
    }
    cout << endl;
    
    return 0;
}