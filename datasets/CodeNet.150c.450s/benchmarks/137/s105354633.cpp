//
//  main.cpp
//  dictionary
//
//  Created by ???????????? on 2017/10/06.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstring>
#include <stdio.h>


#define NIL (0)

using namespace std;

int m = 1046527;

int char_to_int(char str){
    if(str == 'A'){
        return 1;
    }
    else if(str == 'C'){
        return 2;
    }
    else if(str == 'G'){
        return 3;
    }
    else if(str == 'T'){
        return 4;
    }
    cout << "Unexpected input given" << endl;
    return 0;
}

long long get_key(char string[]){
    long long key_str = 0, p = 1;
    size_t n = strlen(string);
    for (int i = 0; i < n; i++){
        key_str += p*char_to_int(string[i]);
        p *= 5;
    }
    return key_str;
}

int h1(int key){
    return key % m;
}

int h2(int key){
    return 1+(key % (m-1));
}

int h(int key, int i){
    return (h1(key) + i*h2(key)) % m;
}

void insert(int T[], int key){
    int i = 0;
    while(true){
        int j = h(key, i);
        if (T[j] == NIL){
            T[j] = key;
            break;
        }
        else{
            i++;
        }
    }
}

bool search(int T[], int key){
    int i = 0;
    while(true){
        int j = h(key, i);
        if(T[j] == key){
            return true;
        }
        else if(T[j] == NIL || i > m){
            return false;
        }
        else{
            i++;
        }
    }
}

int main(int argc, const char * argv[]) {
    int n, i;
    long long key;
    char com[10], string[10];
    int T[m];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s %s", com, string);
        key = get_key(string);
        if(com[0] == 'i'){
            insert(T, key);
        }
        else if(com[0] == 'f'){
            if(search(T, key)){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout << "Got unexpected command" << endl;
        }
    }
    
    
    
    return 0;
}