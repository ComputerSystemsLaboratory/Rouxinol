#include <bits/stdc++.h>
using namespace std;
int main(){
char c;
int n[26]={};
while(cin>>c){
c= tolower(c);
if(isalpha(c)){
n[c-'a']++;
}
}
for(int i=0;i<26;i++){
printf("%c : %d\n",i+'a',n[i]);
}
}