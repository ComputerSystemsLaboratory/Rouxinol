#include<stdio.h>
#include<string.h>
#define MAX 100

int main(void){
    int n;
    int t_point = 0, h_point = 0;
    char tarou[MAX], hanako[MAX];
    
    scanf("%d", &n);
    for(; n > 0; n--){
        scanf("%s %s", tarou, hanako);
        if(strcmp(tarou, hanako) > 0){
            t_point += 3;
        }else if(strcmp(tarou, hanako) == 0){
            t_point += 1;
            h_point += 1;
        }else if(strcmp(tarou, hanako) < 0){
            h_point += 3;
        }
    }
    printf("%d %d\n", t_point, h_point);
    
    return 0;
}
