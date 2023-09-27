#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define rep(i,n) for(int i=0;i<n;i++)
int main(void){
    int n;
    cin>>n;
    rep(lp,n){
        string s; cin>>s;
        set<string> st;
        for(int i=1;i<s.length();i++){
            string a=s.substr(0,i);
            string b=s.substr(i);
            string ra=a; reverse(all(ra));
            string rb=b; reverse(all(rb));
            st.insert(a+b);
            st.insert(a+rb);
            st.insert(ra+b);
            st.insert(ra+rb);
            st.insert(b+a);
            st.insert(b+ra);
            st.insert(rb+a);
            st.insert(rb+ra);
        }
        cout<<st.size()<<endl;
    }
}