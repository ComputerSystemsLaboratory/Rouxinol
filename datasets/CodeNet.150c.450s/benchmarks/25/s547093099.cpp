#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
int main(){
    string s;
    int alp[26] = {};
    while(true){
        getline(cin, s);
        if(s=="") break;    
        for(int i=0;i<s.size();i++){
            if('a' <= s[i] && s[i] <= 'z'){
                alp[s[i]-'a']++;
            }else if('A' <= s[i] && s[i] <= 'Z'){
                alp[s[i]-'a'+32]++;
            }
        }
    }

    for(int i=0;i<26;i++){
        printf("%c : %d\n", 'a'+i, alp[i]);
    }
}
