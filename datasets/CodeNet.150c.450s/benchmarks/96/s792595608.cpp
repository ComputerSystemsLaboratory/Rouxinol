#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;cin>>n;
    vector<string> v;
    v.push_back("");v.push_back(".,!? ");v.push_back("abc");
    v.push_back("def");v.push_back("ghi");v.push_back("jkl");
    v.push_back("mno");v.push_back("pqrs");v.push_back("tuv");
    v.push_back("wxyz");
    for(int i=0;i<n;i++){
        string s;cin>>s;
        s+='0';
        string res="";
        int cnt=0,idx=0;
        for(int j=0;j<(int)s.length();j++){
            if(s[j]-'0' ==0){
                if(cnt==0) continue;
                res+=v[idx][(cnt-1)%(v[idx].length())];
                cnt=0;
            }
            else{
                idx=s[j]-'0';
                cnt++;
            }
        }
        cout<<res<<endl;
    }
}