#include<stdio.h>

void bubblesort(int *a,int n){

int i,j,k,temp;

for (i = 0; i < n; i++) {
    j=n-1;
    while (j!=i) {
        if (a[j]<a[j-1]) {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        j--;
    }
    /*for (k = 0; k < n; k++) {
        if(k==n-1)printf("%d\n",a[k]);
        else printf("%d ",a[k]);
    }*/
}
}






int main() {

    int a[10],i;

    for (i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }

    bubblesort(a,10);

    for (i = 0; i < 3; i++) {
        printf("%d\n",a[9-i] );
    }
    return 0;
}