#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

void solve(string s){
    set<string> st;
    int N=s.size();
    for(int i=1;i<N;i++){
        string a=s.substr(0,i);
        string b=s.substr(i);
        string aa(a);
        string bb(b);
        reverse(aa.begin(),aa.end());
        reverse(bb.begin(),bb.end());
        st.insert(a+b);
        st.insert(aa+b);
        st.insert(a+bb);
        st.insert(aa+bb);
        st.insert(b+a);
        st.insert(bb+a);
        st.insert(b+aa);
        st.insert(bb+aa);
    }
    cout << st.size() << endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        solve(s);
    }
}