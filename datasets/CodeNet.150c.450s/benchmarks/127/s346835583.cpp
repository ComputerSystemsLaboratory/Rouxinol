#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

set<string> st;
int main(){
    int m;
    cin>>m;
    string s;
    while(m--){
        cin>>s;
        st.clear();
        int n=s.size();
        string a1,a2,ra1,ra2;
        FOR(i,0,n){
            ra1=a1=s.substr(0,i);
            ra2=a2=s.substr(i,n-i);
            reverse(ra1.begin(),ra1.end());
            reverse(ra2.begin(),ra2.end());
            st.insert(a1+a2);st.insert(a2+a1);
            st.insert(ra1+a2);st.insert(a2+ra1);
            st.insert(a1+ra2);st.insert(ra2+a1);
            st.insert(ra1+ra2);st.insert(ra2+ra1);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
