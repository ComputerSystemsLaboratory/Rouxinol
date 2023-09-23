#include<iostream>
#include<algorithm>
using namespace std;


int bubbleSort(int A[],int N){
int i,j,count,flag;
   flag = 1;
   count = 0;
   while(flag){
     flag = 0;
     for(j=N-1;j>0;j--){
       if(A[j]<A[j-1]){
         swap(A[j],A[j-1]);
         flag = 1;
         count++;
       }
     }
   }
   return count;
}

int main(){
   int N,i,count,A[100];
   cin >> N;
   for(i=0;i<N;i++)cin >> A[i];
   
   count = bubbleSort(A,N);
   
   for(i=0;i<N;i++){
     if(i)cout << " ";
     cout << A[i];
   }

   cout << endl;
   cout << count << endl;

   return 0;
}