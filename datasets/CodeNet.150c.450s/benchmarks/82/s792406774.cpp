#include<cstdio>
#include<string.h>
#include<stdlib.h>

int main(){
    int s[6];
    int t[6];
    char h[4] = {'N','S','W','E'};
    int a,b,n;
    for(int i = 0;i < 6;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d %d",&a,&b);
        while(1){
            int k = rand() % 4;
                if(h[k] == 'N'){
                    t[4] = s[0];
                    t[0] = s[1];
                    t[1] = s[5];
                    t[5] = s[4];
                    t[2] = s[2];
                    t[3] = s[3];
                }
                if(h[k] == 'S'){
                    t[0] = s[4];
                    t[1] = s[0];
                    t[5] = s[1];
                    t[4] = s[5];
                    t[2] = s[2];
                    t[3] = s[3];
                }
                if(h[k] == 'W'){
                    t[0] = s[2];
                    t[2] = s[5];
                    t[5] = s[3];
                    t[3] = s[0];
                    t[1] = s[1];
                    t[4] = s[4];
                }
                if(h[k] == 'E'){
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
                if(s[0] == a && s[1] == b){
                    break;
                }
            
            if(s[0] == a && s[1] == b){
                    break;
            }
            
            
        }
        printf("%d\n",s[2]);
    }
    
}
