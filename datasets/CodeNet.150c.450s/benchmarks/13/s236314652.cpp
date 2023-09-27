#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string i,j;
    cin >> i >> j;
    i = i+i;
    if(i.find(j) != -1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    } 
}
