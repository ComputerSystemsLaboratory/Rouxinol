#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int MAX_M=100;

int m;
char str[MAX_M][MAX_M];

int solve(const string &s){
    set<string> ss;
    ss.insert(s);
    string r(s.rbegin(),s.rend());
    for(string::size_type i=1;i < s.length();i++){
        string s0(s,0,i);
        string s1(s,i);
        string r0(s0.rbegin(),s0.rend());
        string r1(s1.rbegin(),s1.rend());
        ss.insert(s0+r1);
        ss.insert(r0+s1);
        ss.insert(r0+r1);
        ss.insert(s1+r0);
        ss.insert(s1+s0);
        ss.insert(r1+s0);
    }
    return ss.size();

}

int main(){
    string str;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        cin >> str;
        cout << solve(str) << endl;
    }

}
