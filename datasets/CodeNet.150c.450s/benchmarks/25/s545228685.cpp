#include <iostream>
using namespace std;
int main(void){
   string s;
   int nc[26]={};
   
   while(getline(cin,s)){
       for(int i=0;i<(int)s.length();i++){
           if('a'<=s[i]&&s[i]<='z') nc[s[i]-'a']++;
           if('A'<=s[i]&&s[i]<='Z') nc[s[i]-'A']++;
       }
   }
   for(int i=0; i<26 ;i++){
       cout<<(char)('a'+i)<<" : "<<nc[i]<<endl;
   }
   
}

