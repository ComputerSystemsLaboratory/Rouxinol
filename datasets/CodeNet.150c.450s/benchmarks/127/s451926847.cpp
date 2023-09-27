#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}
//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m; cin>>m;
    while(m--)
    {
        string s; cin>>s;
        set<string> st;
        for(int i=1;i<s.size();i++){
            string s1=s.substr(0,i);
            string s2=s.substr(i,s.size());

            st.insert(s1+s2); st.insert(s2+s1);
            reverse(ALL(s1));
            st.insert(s1+s2); st.insert(s2+s1);
            reverse(ALL(s2));
            st.insert(s1+s2); st.insert(s2+s1);
            reverse(ALL(s1));
            st.insert(s1+s2); st.insert(s2+s1);
        }
        cout<<st.size()<<endl;
    }
}