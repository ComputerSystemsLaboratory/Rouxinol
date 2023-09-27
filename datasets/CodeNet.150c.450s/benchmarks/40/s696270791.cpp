#include<cstdio>
#include<string.h>

int main(){
    int s[6];
    int t[6];
    char h[101];
    for(int i = 0;i < 6;i++){
        scanf("%d",&s[i]);
    }
    scanf("%s",h);
    for(int i = 0;h[i] != 0;i++){
        if(h[i] == 'N'){
            t[4] = s[0];
            t[0] = s[1];
            t[1] = s[5];
            t[5] = s[4];
            t[2] = s[2];
            t[3] = s[3];
        }
        if(h[i] == 'S'){
            t[0] = s[4];
            t[1] = s[0];
            t[5] = s[1];
            t[4] = s[5];
            t[2] = s[2];
            t[3] = s[3];
        }
        if(h[i] == 'W'){
            t[0] = s[2];
            t[2] = s[5];
            t[5] = s[3];
            t[3] = s[0];
            t[1] = s[1];
            t[4] = s[4];
        }
        if(h[i] == 'E'){
            t[2] = s[0];
            t[5] = s[2];
            t[3] = s[5];
            t[0] = s[3];
            t[1] = s[1];
            t[4] = s[4];
        }
        for(int j = 0;j < 6;j++){
            s[j] = t[j];
        }
    }
    printf("%d\n",s[0]);
}
