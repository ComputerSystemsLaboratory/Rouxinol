#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin>>m;
    for(int i=0;i<m;i++) {
        string s;
        cin>>s;
        set<string> S;
        for(int i=1;i<=s.size()-1;i++) {
            string first=s.substr(0,i);
            string second=s.substr(i);
            string r_first=first;
            string r_second=second;
            reverse(r_first.begin(),r_first.end());
            reverse(r_second.begin(),r_second.end());
            S.insert(first+second);
            S.insert(second+first);
            S.insert(r_first+second);
            S.insert(second+r_first);
            S.insert(first+r_second);
            S.insert(r_second+first);
            S.insert(r_first+r_second);
            S.insert(r_second+r_first);
        }
        cout<<S.size()<<endl;
    }
}