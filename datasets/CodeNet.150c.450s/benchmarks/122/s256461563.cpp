#include <iostream>
#include <string>
using namespace std;

constexpr int MAX=2000000;
constexpr int INFTY=(1<<30);

int H, A[MAX+1];

int left(int i){ return i*2; }
int right(int i){ return i*2+1; }
int parent(int i){ return i/2; }

void maxHeapify(int i){
   int l=left(i);
   int r=right(i);
   int largest;
   if(l<=H && A[i]<A[l])
      largest=l;
   else
      largest=i;
   if(r<=H && A[largest]<A[r])
      largest=r;

   if(largest!=i){
      swap(A[largest], A[i]);
      maxHeapify(largest);
   }
}

int extract(){
   int maxv;
   if(H<1) return -INFTY;
   maxv=A[1];
   A[1]=A[H--];
   maxHeapify(1);
   return maxv;
}

void IncreaseKey(int i, int key){
   if(key<A[i]) return;
   A[i]=key;
   while(i>1 && A[parent(i)]<A[i]){
      swap(A[i], A[parent(i)]);
      i=parent(i);
   }
}

void insert(int key){
   H++;
   A[H]=-INFTY;
   IncreaseKey(H, key);
}

int main(){
   int key;
   string com;
   while(true){
      cin >> com;
      if(com=="end") break;
      if(com=="insert"){
         cin >> key;
         insert(key);
      }
      else
         cout << extract() << endl;
   }
}
