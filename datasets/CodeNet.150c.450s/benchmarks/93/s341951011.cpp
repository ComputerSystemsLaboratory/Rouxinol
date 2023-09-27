#include <iostream>
using namespace std;

struct Card{
   char ch;
   int num;
};

Card A[100'000]; //For Merge
Card B[100'000]; //For Quick 
Card L[100'000/2+1], R[100'000/2+1];

int partition(int p, int r){
   int x=B[r].num;
   int i=p-1;
   for(int j=p; j<r; j++){
      if(B[j].num<=x){
         i++;
         Card tmp=B[i]; B[i]=B[j]; B[j]=tmp;
      }
   }
   Card tmp=B[i+1]; B[i+1]=B[r]; B[r]=tmp;
   return i+1;
}

void Quick_Sort(int p, int r){
   if(p < r){
      int q = partition(p, r);
      Quick_Sort(p, q-1);
      Quick_Sort(q+1, r);
   }
}

//StableSort!
void Merge(int left, int mid, int right){
   int n1=mid-left;
   int n2=right-mid;
   int i, j, k;

   for(i=0; i<n1; i++) L[i]=A[left+i];
   for(i=0; i<n2; i++) R[i]=A[mid+i];
   L[n1].num=1000000000;
   R[n2].num=1000000000;

   i = j = 0;
   for(k=left; k<right; k++){
      if(L[i].num<=R[j].num){
         A[k]=L[i];
         i++;
      }else{
         A[k]=R[j];
         j++;
      }
   }
}

void Merge_Sort(int left, int right){
   int mid, res=0;
   if(left+1<right){
      mid=(left+right)/2;

      Merge_Sort(left, mid);
      Merge_Sort(mid, right);
      Merge(left, mid, right);
   }
}

int main(){
   int n;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> A[i].ch;
      cin >> A[i].num;
      B[i].ch = A[i].ch;
      B[i].num = A[i].num;
   }

   Merge_Sort(0, n);
   Quick_Sort(0, n-1);

   bool stable = true;
   for(int i=0; i<n; i++){
      if(A[i].ch != B[i].ch) stable = false;
   }

   if(stable) cout << "Stable" << endl;
   else cout << "Not stable" << endl;
   for(int i=0; i<n; i++){
      cout << B[i].ch << " " << B[i].num << endl;
   }

   return 0;
}
