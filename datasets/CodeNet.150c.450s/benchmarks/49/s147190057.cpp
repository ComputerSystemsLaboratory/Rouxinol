#include<stdio.h>

int main(void){
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0)
            break;

        int p[n];
        for(int i = 0;i < n;i++){
            scanf("%d",&p[i]);
        }

        int sum = 0,min = 100000,max = -1;
        for(int i = 0;i < n;i++){
            if(min > p[i])
                min = p[i];
            if(max < p[i])
                max = p[i];

            sum += p[i];
        }
        sum -= min + max;

        printf("%d\n",sum / (n - 2));
    }
    return 0;
}