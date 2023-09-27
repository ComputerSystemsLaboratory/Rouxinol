#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sum(string s, string t){
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    
    string res;
    int carry = 0;
    int md = max(t.size(), s.size());
    for(int i=0; i<=md; i++){
        int sc = i<s.size()? s[i]-'0': 0;
        int tc = i<t.size()? t[i]-'0': 0;
        int d = sc + tc + carry;
        char nd = '0' + (d%10);
        if(i == md && nd == '0')
            continue;
        res += nd;
        carry = d/10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string s, t;
    while(cin >> s >> t){
        cout << sum(s, t).size() << endl;
    }
    return 0;
}

