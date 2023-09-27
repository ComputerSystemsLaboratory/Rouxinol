#include<stdio.h>
 
int main(){
    int i;
    int a,b;
    int answer;
    while(scanf("%d %d",&a,&b)!=EOF){
        a = a + b;
        answer = 1;
        while(a/10){
            a /= 10;
            answer += 1;
        }
        printf("%d\n",answer);
    }
    return 0;
}