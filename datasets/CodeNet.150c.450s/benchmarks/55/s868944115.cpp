#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char ch[1000];


    while(1){
        scanf("%s", ch);
        int sum = 0;
        if(ch[0] == '0'){
            break;
        }

        for(int i = 0; i < strlen(ch); i++){
            sum += ch[i] - '0';
        }
        printf("%d\n", sum);
        
        
    }
    return 0;
}
