#include<cstdio>
#include<cstring>

int main(void){
    int s, n;
    int i, j;
    int flag = 0;
    char txt[101];
    char pat[101];

    scanf("%s", txt);
    scanf("%s", pat);

    n = strlen(txt);
    s = strlen(pat);

    for(i = 0; i < n; i++){
        int p = i;
        while(j < s){
            if(p == n) p = 0;
            if(txt[p] == pat[j]){
                p++;
                j++;
            }else{
                j = 0;
                break;
            }
        }
        if(j == s){
            printf("Yes\n");
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("No\n");
    }

    return 0;
}