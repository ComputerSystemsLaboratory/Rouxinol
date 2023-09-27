#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    char ch;
    int count[26] = {};
    while(cin >> ch){
        if(isalpha(ch)){
            count[tolower(ch) - 'a'] ++;
        }
    }
    for(int i = 0; i <= 25; i++){
        printf("%c : %d\n",i + 'a',count[i]);
    }
    return 0;
}
