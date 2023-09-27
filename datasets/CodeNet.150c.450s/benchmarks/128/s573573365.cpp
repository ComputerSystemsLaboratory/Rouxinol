#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main(){
    stack<char> str;
    char c;
    while(1){
        scanf("%c",&c);
        if(c=='\n'||c==EOF) break;
        str.push(c);
    }
    while(!str.empty()){
        printf("%c",str.top());
        str.pop();
    }
    printf("\n");
    return 0;
}