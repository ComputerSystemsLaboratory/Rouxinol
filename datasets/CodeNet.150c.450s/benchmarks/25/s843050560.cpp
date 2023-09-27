#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(void){
    string str;
    int alphabet[26] ={};
    while(getline(cin,str)){
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < str.size(); j++){
                if ((str[j] == 65 + i) || (str[j] == 97 + i)){
                    alphabet[i] += 1;
                }
            }
        }
    }
    for (int i = 0; i < 26; i++){
        printf("%c : %d\n", i + 97, alphabet[i]);
    }
    return 0;
}
