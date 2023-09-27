#include<iostream>
#include<algorithm>
using namespace std;
  
int selectionSort(int A[],int N){
   int i,j,minj,count;
   count = 0;
   for(i=0;i<N;i++){
     minj = i;
     for(j=i;j<N;j++){
       if(A[j]<A[minj])minj = j;
     }
     if(i!=minj){
       swap(A[i],A[minj]);
       count++;
     }
   }
   return count;
}
  
int main(){
   int A[100],N,count,i;
   cin >> N;
   for(i=0;i<N;i++)cin >> A[i];
     
   count = selectionSort(A,N);
     
   for(i=0;i<N;i++){
     if(i)cout << " ";
     cout << A[i];
   }
   cout << endl;
   cout << count << endl;
  
   return 0;
}