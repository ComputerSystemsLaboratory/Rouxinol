#include<iostream>
#include<algorithm>
using namespace std;
int H,A[20000000];
void maxHeapify(int A[],int i){
  int l,r,largest;
      l= 2*i;
      r = 2*i+1;
      // 左の子、自分、右の子で値が最大のノードを選ぶ
      if (l <= H && A[l] > A[i]){
          largest = l;
        }
      else{
          largest = i;
        }
      if (r <= H && A[r] > A[largest]){
         largest = r;
       }

     if (largest != i){
         swap(A[i],A[largest]); //を交換
         maxHeapify(A, largest); // 再帰的に呼び出し
       }
     }
void buildMaxHeap(int A[],int H){
      for (int i = H/2; i>= 1;i--){
          maxHeapify(A, i);
        }
      }
int main(){
    cin>>H;
      for(int j=1;j<H+1;j++){
          cin>>A[j];
      }
      buildMaxHeap(A,H);
      for(int j=1;j<H+1;j++){
        cout<<" "<<A[j];
      }
      cout<<endl;
}

