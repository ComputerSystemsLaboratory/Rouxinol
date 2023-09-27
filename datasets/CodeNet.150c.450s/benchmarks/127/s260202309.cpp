#include <bits/stdc++.h>
using namespace std;

int solve(string);

int main(void) {
    int i,n;
    string s;
    
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

int solve(string s){
    string s1,s2,rs1,rs2;
    set<string> str;
    for(int i=1;i<s.length();i++) {
        s1 = rs1 = s.substr(0,i);
        s2 = rs2 = s.substr(i,s.length()-1);
        reverse(rs1.begin(),rs1.end());
        reverse(rs2.begin(),rs2.end());
        str.insert(s1+s2);
        str.insert(s2+s1);
        str.insert(rs1+s2);
        str.insert(rs2+s1);
        str.insert(s1+rs2);
        str.insert(s2+rs1);
        str.insert(rs1+rs2);
        str.insert(rs2+rs1);

    }
    return str.size();
}