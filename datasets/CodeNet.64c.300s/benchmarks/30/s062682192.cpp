#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int main(void){
    int in;
    while(1){
        int cnt=0;
        cin >> in;
        if(in==0)break;
        in = 1000-in;
        if(in>=500){
            cnt++;
            in-=500;
        }
        if(in>=100){
            cnt+=in/100;
            in=in%100;
        }
        if(in>=50){
            cnt++;
            in-=50;
        }
        if(in>=10){
            cnt+=in/10;
            in=in%10;
        }
        if(in>=5){
            cnt++;
            in-=5;
        }
        cnt+=in;
        cout << cnt <<endl;
    }
    
    return 0;
}