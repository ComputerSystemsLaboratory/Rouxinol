#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string>
#include <iostream>

using namespace std;

char down_cast(char c) {
    if(isupper(c)) c=tolower(c);
    return c;
}

int main(void) {
    string s,t;
    int c[26]={};
    while(getline(cin,t)) s+=t;

    for(int i=0;i<s.size();i++) {

        if(s[i]==' ' || s[i]=='.') continue;
        c[down_cast(s[i])-'a']++;
    }

    for(int i=0;i<26;i++) {
        printf("%c : %d\n",i+'a',c[i]);
    }
    


}