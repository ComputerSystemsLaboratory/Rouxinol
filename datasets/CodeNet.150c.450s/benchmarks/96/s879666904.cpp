#include <bits/stdc++.h>
using namespace std;

char bt[9][8] = {
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

int main(){
    int N;
    for(scanf("%d", &N); N--;){
        char mes[1280];
        scanf(" %s", mes);
        int len = strlen(mes);
        int prv = 0, count = 0;
        for(int i = 0; i < len; i++){
            if(mes[i] == '0'){
                if(prv > 0){
                    --prv;
                    printf("%c", bt[prv][--count % strlen(bt[prv])]);
                }
                count = 0;
            }else{
                count++;
            }
            prv = mes[i] - '0';
        }
        if(prv > 0){
            --prv;
            printf("%c", bt[prv][--count % strlen(bt[prv])]);
        }
        puts("");
    }
    return 0;
}