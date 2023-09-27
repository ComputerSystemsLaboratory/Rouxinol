#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b,c;
    string o;

    for (;;){
        cin >> a >> b >> c;
        if (a==-1 && b==-1 && c==-1)break;
        if (a==-1 || b==-1){
            o="F";
        }else if((a+b)>=80){
            o="A";
        }else if((a+b)>=65 && (a+b) < 80){
            o="B";
        }else if((a+b)>=50 && (a+b) < 65){
            o="C";
        }else if((a+b)>=30 && (a+b) < 50){
            o="D";
            if (c>=50)o="C";
        }else if((a+b)<30 ){
            o="F";
        }
        cout << o << endl;
    }
    
    return 0;
}