#include<stdio.h>
 #include<algorithm>
 using namespace std;
 int a[2000000];
 int H;
 void minitree(int i)
 {
     int l=i*2;
     int r=i*2+1;
     int bigest;
     if(a[i]<a[l]&&l<=H) bigest=l;
     else bigest=i;
     if(a[bigest]<a[r]&&r<=H) bigest=r;
     if(bigest!=i)
     {
         swap(a[bigest],a[i]);
         minitree(bigest);
     }
 }
 int main()
 {

     scanf("%d",&H);
     for (int i=1;i<=H;i++)
        scanf("%d",&a[i]);
     for (int i=H/2;i>=1;i--) minitree(i);
     for (int i=1;i<=H;i++) printf(" %d",a[i]);
     printf("\n");
     return 0;
 }