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
            string L1,R1,L2,R2;
            L1=L2=s.substr(0,i);
            R1=R2=s.substr(i);
            reverse(ALL(L2)); reverse(ALL(R2));
            st.insert(L1+R1); st.insert(R1+L1);
            st.insert(L1+R2); st.insert(R2+L1);
            st.insert(L2+R1); st.insert(R1+L2);
            st.insert(L2+R2); st.insert(R2+L2);
        }
        cout<<st.size()<<endl;
    }
}