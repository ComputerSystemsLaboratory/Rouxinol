#include<iostream>
#include<cstdio>
using namespace std;

int main(){
   int W,n,i,z,*num;
   int a[30],b[30];
   char s;
   cin>>W>>n;
   
   num = new int[W];
   for(i=0;i<W;i++) num[i] = i+1;
   
   for(i=0;i<n;i++){
      cin>>a[i]>>s>>b[i];
   }
   for(i=0;i<n;i++){
      z = num[a[i]-1];
      num[a[i]-1] = num[b[i]-1];
      num[b[i]-1] = z;
   }
   for(i=0;i<W;i++){
      printf("%d\n",num[i]);
   }
   delete[] num;
   return 0;
}