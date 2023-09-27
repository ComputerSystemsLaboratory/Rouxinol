#include<iostream>
//cout,cinが使える//
#include<cstdio>
//scanf,printfが使える//
#include<cctype>
//文字の種類の判定や文字の変換を行う関数を使える//
using namespace std;

int main(){
    char ch;
    int cnt[26]={};
    
    while (cin >> ch){
        ch = tolower(ch);
        //chの小文字を返す//
        if (isalpha(ch)){
            //chがアルファベットならtrueを返す//
            cnt[ch-'a']=cnt[ch-'a']+1;
            //aからzまで連続したアスキーコードが割り当てられているので、文字からaを引くと対応した番号がgetできる//
        }
    }
    for(int i=0; i<26;i++){
        printf("%c : %d\n", i+'a', cnt[i]);
    }
    
    return 0;
    
}
