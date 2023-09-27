#include <iostream>
#include <cstdio>                              //scanf,printf
#include <algorithm>                           //max,min
#include <string>                              //string
#include <cstring>                             //strlen,strcat
#include <cctype>                              //isalpha,tolower
using namespace std;

string toUpper(string s){
    string t=s;
    for(int i=0; i<s.size(); i++){
        t[i]=toupper(t[i]);
    }
    return t;
}

int main(){
    string target,text;
    int sum=0;
    cin>>target;
    for(int i=0; i<target.size(); i++){
        target[i]=toupper(target[i]);
    }
    while(1){
        cin>>text;
        if(text=="END_OF_TEXT") break;
        text = toUpper(text);
        if(text==target) sum++;
    }
    cout<<sum<<endl;
}

