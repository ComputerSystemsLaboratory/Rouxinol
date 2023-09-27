#include<iostream>
#include<string>

using namespace std;

int main(void){
    int i;
    int cnt[26]={0};
    string s;
    string abc="abcdefghijklmnopqrstuvwxyz";
    while(getline(cin,s)){
    for(i=0;i<s.size();i++){
        if(s[i]!=' ' && islower(s[i])) cnt[s[i]-'a']++;
        if(s[i]!=' ' && isupper(s[i])) cnt[s[i]-'A']++;
    }
    }
    for(i=0;i<26;i++){
        cout << abc[i] << " : " << cnt[i] << endl;
    }
    return 0;
}