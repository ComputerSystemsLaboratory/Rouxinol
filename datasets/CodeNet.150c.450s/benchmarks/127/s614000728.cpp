#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS=1e-10;
const ll INF=1000000000;
int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        set<string> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            string s1=s.substr(0,i);
            string s2=s.substr(i);
            st.insert(s1+s2);
            st.insert(s2+s1);
            reverse(s1.begin(),s1.end());
            st.insert(s1+s2);
            st.insert(s2+s1);
            reverse(s2.begin(),s2.end());
            st.insert(s1+s2);
            st.insert(s2+s1);
            reverse(s1.begin(),s1.end());
            st.insert(s1+s2);
            st.insert(s2+s1);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
