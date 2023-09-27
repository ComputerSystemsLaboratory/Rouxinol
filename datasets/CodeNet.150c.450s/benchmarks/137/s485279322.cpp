#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 16777216
#define ORDER_LENGTH 7
#define STR_LENGTH 13

using namespace std;

int translateChar(char ch){

    switch(ch){
    case 'A':
        return  1;
    case 'C':
        return  2;
    case 'G':
        return  3;
    case 'T':
        return  4;
    }
}


int translateStr(char buf[]){
    int sum = 0,mult = 1;
    for(int i = 0; buf[i] != '\0'; i++){
        sum += translateChar(buf[i])*mult;
        mult *= 4;
    }
    return sum - 1;
}

int main(){

    int n;
    scanf("%d",&n);
    char order[ORDER_LENGTH],str[STR_LENGTH];

    char* check_table = new char[TABLE_SIZE];

    for(int i = 0; i < n; i++){
        scanf("%s %s",order,str);
        if(order[0] == 'i'){
            check_table[translateStr(str)] = 'Y';
        }else{
            if(check_table[translateStr(str)] == 'Y'){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
}