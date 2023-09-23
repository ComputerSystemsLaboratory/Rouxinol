#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int *A=new int[n+1];
   for(int i=1;i<n+1;i++){
      cin>>A[i];
   }

   int x = A[n];
   int i = 0;
   int tmp=0;
   for(int j=1;j<=n-1;j++){
      if(A[j]<=x){
         i=i+1;
		 tmp=A[i];
		 A[i]=A[j];
		 A[j]=tmp;
      }
   }
   tmp=A[i+1];
   A[i+1]=A[n];
   A[n]=tmp;
   i=i+1;

   for(int j=1;j<n+1;j++){
      if(j==i){
         cout<<'['<<A[j]<<']';
      }
      else{
         cout<<A[j];
      }	
	  if(j<n){
		  cout<<' ';
	  }
	  else{
		  cout<<endl;
	  }
   }
   delete[] A;
   return 0;
}