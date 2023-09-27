#include<iostream>
#include<string>
#include<algorithm>
#include <stdio.h>
using namespace std;


 int main(){

   int w,n,u,t,p;
   cin >> w>>n;
   int a[w];
   for(int i=0; i<w;i++)
    a[i]=i+1;

   for(int i=0; i<n;i++){
     scanf("%d,%d\n",&u,&t);
     p=a[t-1]; a[t-1]=a[u-1];a[u-1]=p;
   }
   for(int i=0; i<w ;i++)printf("%d\n",a[i]);
 }

