#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int keisan(string in){
    int sum=0,memo=0;
    int kei[4]={1000,100,10,1};
    string moji="mcxi";
    int digit[8]={2,3,4,5,6,7,8,9};
    string suu="23456789";
    for(int i=0;i<in.length();i++){
        if(isdigit(in[i])){//数字ならば
            for(int t=0;t<8;t++){
                if(suu[t]==in[i]){
                    memo=digit[t];
                    break;
                }
            }
        }else{
            for(int t=0;t<4;t++){//文字ならば
                if(moji[t]==in[i]){
                    if(memo!=0){
                        sum+=kei[t]*memo;
                        memo=0;
                    }else{
                        sum+=kei[t];
                    }
                }
            }
        }
    }
    return sum;
}
string hen(int input){
    string out="";
    int digit[8]={2,3,4,5,6,7,8,9};
    string suu="23456789";
    if(input>=1000){
        int test = input/1000;
        if(test>1){
            for(int t=0;t<8;t++){
                if(digit[t]==test){
                    out+=suu[t];
                    break;
                }
            }
        }
        out+="m";
        input=input%1000;
    }
    if(input>=100){
        int test = input/100;
        if(test>1){
            for(int t=0;t<8;t++){
                if(digit[t]==test){
                    out+=suu[t];
                    break;
                }
            }
        }
        out+="c";
        input=input%100;
    }
    if(input>=10){
        int test = input/10;
        if(test>1){
            for(int t=0;t<8;t++){
                if(digit[t]==test){
                    out+=suu[t];
                    break;
                }
            }
        }
        out+="x";
        input=input%10;
    }
    if(input>=1){
        if(input>1){
            for(int t=0;t<8;t++){
                if(digit[t]==input){
                    out+=suu[t];
                    break;
                }
            }
        }
        out+="i";
    }
    return out;
    
}
int main(void){
    int n;
    cin>>n;
    for(int s=0;s<n;s++){
        string in,in2;
        cin>>in>>in2;
        int sum = keisan(in);
        int sum2 = keisan(in2);
        string henkan;
        henkan= hen(sum+sum2);
        cout<<henkan<<endl;
    }
    return 0;
}