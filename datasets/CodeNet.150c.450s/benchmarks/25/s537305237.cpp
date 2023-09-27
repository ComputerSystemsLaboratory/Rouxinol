#include<cstdio>
#include<cctype>
#include<iostream>
using namespace std;
int main(){
    int counter[26];
    char ch;
    for (int i = 0; i < 26; i++){
        counter[i] = 0;
    }
    while(cin >> ch){
        if (isalpha(ch)){
            if(islower(ch)) counter[ch - 'a']++;
            else counter[tolower(ch) - 'a']++;
        }
    }
    for(int i = 0; i < 26; i ++){
        printf("%c : %d\n", i+'a', counter[i]);
    }
}
