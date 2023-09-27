#include<iostream>

using namespace std;

int main(){

   while(1){

      int n, r;
      cin>> n>> r;
      if(n==0&&r==0) break;
      int a[n];
      for(int i=0; i<n; i++) a[i]=n-i;
      for(int i=0; i<r; i++){
         int p, c;
         cin>> p>> c;
         int b[c];
         for(int j=p-1; j<p+c-1; j++){
            b[j-(p-1)]=a[j];
         }
         for(int j=p+c-2; j>c-1; j--){
            a[j]=a[j-c];
         }
         for(int j=0; j<c; j++){
            a[j]=b[j];
         }
      }

      cout<< a[0]<< endl;
   }
   return 0;
}