#include<stdio.h>
int main(){
	int ka;
	int na; 
    int num[1000005];
    scanf("%d %d", &na, &ka);

    for (int i=0; i<na; i++){
        scanf ("%d", num + i);
    }

    for (int i=ka; i<na; i++){
        if (num[i] > num[i - ka]){  
            printf ("Yes\n");   
        }
        else {
            printf ("No\n");
        }
    }
	return 0;
}