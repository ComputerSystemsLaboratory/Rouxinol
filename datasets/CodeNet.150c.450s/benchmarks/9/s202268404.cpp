#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;


void calc(char* cs){
    std::queue<char> qu;
    int size;
    for(int i=0;cs[i]!='\0';i++){
        qu.push(cs[i]);
    }
    int n,h;
    scanf("%d",&n);
    size=qu.size();
    while(n--){
        scanf("%d",&h);
        for(int i=0;i<h;i++){
            int a=qu.front();
            qu.pop();
            qu.push(a);
        }
    }
    while(qu.empty()==false){
        printf("%c",qu.front());
        qu.pop();
    }
    printf("\n");
}


int main() {
    // your code goes here
    char cs[201];
    while(1){
        scanf("%s",cs);
        if(cs[0]=='-')break;
        calc(cs);
    }
    return 0;
}
