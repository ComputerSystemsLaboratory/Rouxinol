#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0; i <(n); i++)
string rev(string s){
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int N;
    cin>>N;
    while(N--){
        set<string> ans;
        string s;
        cin>>s;
        REP(i, s.size()-1){
            string b = s.substr(0, i+1);
            string e = s.substr(i+1);
            ans.insert(b + e);
            ans.insert(b + rev(e));
            ans.insert(rev(b) + e);
            ans.insert(rev(b) + rev(e));
            ans.insert(e + b);
            ans.insert(e + rev(b));
            ans.insert(rev(e) + b);
            ans.insert(rev(e) + rev(b));
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}
            