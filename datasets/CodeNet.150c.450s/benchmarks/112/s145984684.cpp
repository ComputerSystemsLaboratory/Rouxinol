#include <stdio.h>
#include <string.h>

int main()
{
    while(1){
        int n = 0,m = 0;
        char a[100000] = "",b[100000] = "";
        scanf("%d", &n);
        if(n == 0)return 0;
        for(int i=0;i<n;i++)scanf(" %c %c", &a[i], &b[i]);
        scanf("%d", &m);
        for(int i=0;i<m;i++){
            char chr,out = '\0';
            scanf(" %c",&chr);
            for(int j=0;j<n;j++){
                if(chr == a[j]){
                    out = b[j];
                    break;
                }else{
                    out = chr;
                }
            }
            printf("%c", out);
        }
        puts("");
    }
}