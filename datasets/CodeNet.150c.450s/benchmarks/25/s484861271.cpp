#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char ch;
    int count[26] = {};
    while( scanf("%c", &ch) != EOF ){
        if(isalpha(ch)){
            ch = tolower(ch);
            int num = ch - 'a';
            count[num]++;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%c : %d\n", i + 'a', count[i]);
    }
    return 0;
}
