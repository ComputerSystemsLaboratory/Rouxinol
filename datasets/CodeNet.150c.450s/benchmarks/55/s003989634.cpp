#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    string num;
    int sum = 0;
    while(1){
        cin >> num;
        if(num=="0"){
            break;
        }
        for(int i=0;i<(int)num.size();i++){
            sum = sum + (int)num[i] -48 ;
        }
        cout << sum << endl;
        sum = 0;
        
    }
    return 0;
}
