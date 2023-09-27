#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(){
    map<string,int>M;
    pair<string,int>m_len,a;
    a.second=m_len.second=0;
    while(true){
        char str[33];
        if(!(cin>>str))break;
        M[str]++;
        if(strlen(str)>m_len.second){
            m_len.first=str;
            m_len.second=strlen(str);
        }
    }

    for(map<string,int>::iterator ite=M.begin();ite!=M.end();ite++){
        if(ite->second>a.second){
            a.first=ite->first;
            a.second=ite->second;
        }
    }
    cout<<a.first<<" "<<m_len.first<<endl;


    return 0;
}