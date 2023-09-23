#include<stdio.h>
#include <sstream>
#include <iostream>
#include <cstdlib>
 
using namespace std;
 
#define BUF_SIZE 1024
#define ARRAY_SIZE 100
 
int main(){
 
    char buf[BUF_SIZE] = {0};
    int n = atoi(fgets(buf,BUF_SIZE,stdin));
 
    int array[ARRAY_SIZE] = {0};
 
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
 
    for(int k = 0;k < n; k++){
        if(k != n-1){
            printf("%d ",array[k]);
        }else{
            printf("%d\n",array[k]);
        }
    }
 
    int v = 0;
    int j = 0;
    for(int i = 1; i < n; i++){
        v = array[i];
        j = i-1;
        while(j >= 0 && array[j] > v){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = v;
        for(int k = 0;k < n; k++){
            if(k != n-1){
                printf("%d ",array[k]);
            }else{
                printf("%d\n",array[k]);
            }
        }
    }
 
}
