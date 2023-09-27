#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string,int>m;
    string s;
    vector<string>v;
    while(cin>>s){
        if('A'<=s[0]&&s[0]<='Z'){
            s[0]=s[0]-'A'+'a';
        }
        m[s]++;
        v.push_back(s);
    }
    int ans1=-1;
    int ans2=-1;
    string ans1s;
    string ans2s;
    for(int i=0;i<v.size();i++){
        if(ans1<m[v[i]]){
            ans1=m[v[i]];
            ans1s=v[i];
        }
        if(ans2<(int)v[i].size()){
            ans2=v[i].size();
            ans2s=v[i];
        }
    }
    cout<<ans1s<<" "<<ans2s<<endl;
}