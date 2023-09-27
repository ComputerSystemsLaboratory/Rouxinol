#include <iostream>
using namespace std;

#include <map>
int main(){
    map<string,int> ans;
    int n; cin >> n;
    while(n--){
        string str;cin >> str;
        ans[str]++;
    }
    string res[] = {"AC","WA","TLE","RE"};
    for(auto &a:res){
        printf("%s x %d\n",a.c_str(),ans[a]);
    }
}