#include <stdio.h>
int main(){
    int a[12]={3,1,3,2,3,2,3,3,2,3,2,3},n,m;
    while(1){
        scanf("%d%d",&n,&m);
        if(n==0)return 0;
        
        for(int i=0;i<n-1;i++){
            m+=a[i];
        }
        m+=3;
        m%=7;
        switch(m){
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 0:
                printf("Sunday\n");
                break;
        }
    }
    
}