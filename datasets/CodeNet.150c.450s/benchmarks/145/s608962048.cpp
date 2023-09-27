#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str, longest="";
    map<string, int> words;
    while(cin>>str){
        if(longest.length()<str.length()) longest=str;
        if(words.find(str)==words.end()) words[str]=1;
        else ++words[str]; 
    }
    auto max = words.begin();
    for(auto it=words.begin(); it!=words.end(); ++it){
        if(max->second<it->second) max=it;
    }
    cout<<max->first<<' '<<longest<<'\n';
    return 0;
}