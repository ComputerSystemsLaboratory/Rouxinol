#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

#define L 12
#define M 1046527
#define NIL "Z"

char hash_table[M][L + 1];

int h_1(int num){
    return (num * 2 + 1) % (M - 2);
}

int h_2(int num){
    return (num * 3 + 1) % (M - 4);
}

int H_k(int num, int k){
   return (h_1(num) + h_2(num) * k) % M;
}

int char_to_num(char c){
    if(c == 'A'){
        return 1;
    }else if(c == 'C'){
        return 2;
    }else if(c == 'G'){
        return 3;
    }else{
        return 4;
    }
}

int str_to_num(char* str){
    int index = 0;
    int value = 0;

    while(str[index]){
        value += char_to_num(str[index]) * pow(4, index);
        index++;
    }

    return value;
}

void insert_(char* str){
    int hash_num = str_to_num(str);
    int k = 1;
    while(strcmp(hash_table[H_k(hash_num, k)], NIL)){
        k++;
    }
    strcpy(hash_table[H_k(hash_num, k)], str);
}

void find_(char* str){
    int hash_num = str_to_num(str);
    int k = 1;
    while(strcmp(hash_table[H_k(hash_num, k)], NIL)){
        if(!strcmp(hash_table[H_k(hash_num, k)], str)){
            printf("yes\n");
            return;
        }
        k++;
    }
    printf("no\n");
    return;
}

void init(){
    for(int i = 0; i < M; i++){
        strcpy(hash_table[i], NIL);
    }
}


int main(void){
    init();

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char buf1[100];
        char buf2[100];
        scanf("%s %s", buf1, buf2);
        if(!strcmp(buf1, "insert")){
            insert_(buf2);
        }else if (!strcmp(buf1, "find")){
            find_(buf2);
        }
    }
}

