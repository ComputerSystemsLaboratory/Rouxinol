#include<stdio.h>
#include<string.h>
int main(){
    int i, j;
    int n;
    int a, b;
    char str[1000];
    char op[10];
    char p[1000];
    scanf("%s", str);
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s %d %d", op, &a, &b);
        if(strcmp(op, "print")==0){
            for(j=a; j<=b; j++){
                printf("%c", str[j]);
            }
            printf("\n");
        }
        else if(strcmp(op, "reverse")==0){
            char tmp;
            int l=b;
            for(j=a;j<=(b+a)/2;j++){
                
                    tmp=str[j];
                    str[j]=str[l];
                    str[l]=tmp;
                    l--;
                }
        }
        else if(strcmp(op, "replace")==0){
            int k=0;
            scanf("%s", p);
            for(j=a; j<=b; j++)str[j]=p[k++];
        }
    }
    
    return 0;
}