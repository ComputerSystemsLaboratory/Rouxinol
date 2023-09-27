#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    vector<string> s;
    string temps;
    while (cin>>temps){
        s.push_back(temps);
    }
    int cnt[26]={};
    for (vector<string>::iterator i=s.begin();i!=s.end();i++){
        for (int j=0;j<i->length();j++){
            if ((*i)[j]>='a' && (*i)[j]<='z'){
                (*i)[j]+='A'-'a';
            }
            if ((*i)[j]>='A' && (*i)[j]<='Z'){
                cnt[(int)((*i)[j]-'A')]++;
            }
        }
    }
    for (int i=0;i<26;i++){
        printf("%c : %d\n",i+'a',cnt[i]);
    }
    return 0;
}