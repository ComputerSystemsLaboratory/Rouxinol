#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    string s;
    getline(cin,s);
    string tem="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '&&s[i]!='\n')
            tem+=s[i];
        else{
            if(m.find(tem)!=m.end()){
                (m.find(tem))->second++;
            }
            else{
                m.insert(pair<string,int>(tem,1));
            }
            tem="";
        }
    }
    if(m.find(tem)!=m.end()){
        (m.find(tem))->second++;
    }
    else{
        m.insert(pair<string,int>(tem,1));
    }
    string most,longest;
    map<string,int>::iterator it = m.begin();
    int mo=0;
    for(;it!=m.end();it++){
        if(it->first.length()>longest.length())
            longest=it->first;
        if(it->second>mo){
            most=it->first;
            mo=it->second;
        }
     //   cout<<it->first<<"    "<<it->second<<endl;
    }
    cout<<most<<" "<<longest<<endl;
    return 0;
}