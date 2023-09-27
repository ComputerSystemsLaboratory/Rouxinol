#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    char ch,ci;
    while(1){
        scanf("%c",&ch);
        if(ch=='\n')break;
        if(islower(ch)){
            ci = toupper(ch);
            cout << ci;
        }
        else if(isupper(ch)){
            ci = tolower(ch);
            cout << ci;
        }
        else if(ch==','){
            cout << ',';
        }
        else if(ch==' '){
            cout << ' ';
        }
        else if(ch=='.'){
            cout << '.';
        }
        else{
            cout << ch;
        }
        
    }
    cout << endl;
}
