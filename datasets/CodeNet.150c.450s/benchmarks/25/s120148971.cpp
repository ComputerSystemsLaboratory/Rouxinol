#include<iostream>
#include<string>
using namespace std;

int main(){
    int cnt[26]={};
    char ch;
    
    while(cin>>ch){
        ch=tolower(ch);
        if(isalpha(ch)) cnt[ch-'a']++;
    }
    
    for(int i=0; i<=25; i++){
        cout<<(char)(i+'a')<<" : "<<cnt[i]<<endl;
    }
    return 0;
}

