#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v;
    v.push_back("");
    v.push_back(".,!? ");
    v.push_back("abc");
    v.push_back("def");
    v.push_back("ghi");
    v.push_back("jkl");
    v.push_back("mno");
    v.push_back("pqrs");
    v.push_back("tuv");
    v.push_back("wxyz");
    string s;
    int n;
    scanf("%d",&n);
    for(int k=0;k<n;k++) {
        cin>>s;
        int num=0,cnt=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='0') {
                if(num) putchar(v[num][(cnt-1)%v[num].size()]);
                num=cnt=0;
            }else {
                num=s[i]-'0';
                cnt++;
            }
        }
        putchar('\n');
    }
}