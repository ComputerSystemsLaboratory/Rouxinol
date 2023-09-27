//$g++ main.cpp - compile
//$./a.out - run
#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int l = 0, size = 1000, tmp = 0;
    string number;
    int ans[size];
    for(int i = 0; i < size; i++){
        ans[i] = 0;
    }
    do{
        cin >> number;
        for(int i = 0; i < number.length(); i++){
            tmp = number[i] - '0';
            ans[l] += tmp;
        }
        l++;
    }while(number != "0");
    for(int i = 0; i < l - 1; i++){
        cout << ans[i] << endl;
    }
}