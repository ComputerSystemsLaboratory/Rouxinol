#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    if (a < b){
        printf("a < b\n");
    }

    else if (a > b){
        printf("a > b\n");
    }
    else printf("a == b\n");

    return 0;
}
