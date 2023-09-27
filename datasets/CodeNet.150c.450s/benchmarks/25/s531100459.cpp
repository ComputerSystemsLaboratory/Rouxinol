#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int counter[26] = {};
    char ch;
    while(cin>>ch){
        ch=tolower(ch);
        if(isalpha(ch)){
                int num = ch -'a';
                counter[num]++;
        }
    }
    for(int i=0;i<26;i++){
        printf("%c : %d\n", i+'a',counter[i]);
    }
return 0;
}
