#include<iostream>
#include <cstdio>
#include<cctype>
using namespace std;
 
int main(){
    char ch;
    while((ch = getchar()) != EOF){
        if(islower(ch))ch = toupper(ch);
        else ch = tolower(ch);
        cout << ch;
    }
}