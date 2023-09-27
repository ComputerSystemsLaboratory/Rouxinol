#include <stdio.h>
int main(void){
    int i, score, sum, max, min;
    double ave;
    int n=1;
    scanf("%d", &n);
    while(n!=0){
        ave=0; max=0; min=1000;
        for(i=0;i<n;i++){
            scanf("%d", &score);
            ave = (ave*i + score)/(i+1);
            if(score>max){
                max=score;
            }
            if(score<min){
                min=score;
            }
        }
        ave=(ave*i-min-max)/(i-2);
        printf("%d\n", (int)ave);
        scanf("%d", &n);
    }
    return 0;
}