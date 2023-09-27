#include<iostream>
using namespace std;
#include<stdio.h>
#include<cstdio>

int main(){
    
    char ch;
    int counter[26] = {};
    int num;
    int x;
    while ( cin >> ch){
        if ( 97 <= ch && ch <= 122 ){
            num = ch - 'a';
            counter[num] += 1;
        }
        if ( 65 <= ch && ch <= 90 ){
            num = ch - 'A';
            counter[num] += 1;
        }
    }
    for ( int i = 0; i<26; i++){
        x = 97 + i;
        printf ( "%c : %d\n",x,counter[i]);
    }
    return 0;
}

