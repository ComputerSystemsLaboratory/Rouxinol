#include <stdio.h>

int main() {
    int x,i,m=1;
    scanf("%d",&x);
    for(i=0;i<3;i++){
	m=m*x;
    }
    printf("%d\n",m);
    return 0;
}