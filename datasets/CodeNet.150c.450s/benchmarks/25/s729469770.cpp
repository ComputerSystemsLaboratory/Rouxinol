#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char str;
    int counter[26] ={};
    while(cin >> str){
        if(isalpha(str)){
            str = tolower(str);
            counter[str - 'a']++;
        }
    }
        for(int i = 0; i < 26; i++){
            printf("%c : %d\n", i+'a', counter[i]);
        }
    return 0;
}
