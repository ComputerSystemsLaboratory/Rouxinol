#include <iostream>
#include <cstdio>
using namespace std;

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]>=x[pivot]&&i<last)
                 i++;
             while(x[j]<x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
int main()
{
    int i;
    int a[15];
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,9);

    for(i=0;i<3;i++)
        printf("%d\n",a[i]);

    return 0;
}