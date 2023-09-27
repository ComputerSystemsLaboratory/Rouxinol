#include <iostream>
using namespace std;

constexpr int MAX=200000;
constexpr int SENTINEL=2000000000;
using ll = long long;

int L[MAX/2+2];
int R[MAX/2+2];

ll Merge(int A[], int left, int mid, int right){
   int n1=mid-left;
   int n2=right-mid;
   ll cnt = 0;
   for(int i=0; i<n1; i++) L[i] = A[left+i];
   for(int i=0; i<n2; i++) R[i] = A[mid+i];
   L[n1] = R[n2] = SENTINEL;
   int i=0;
   int j=0;
   for(int k=left; k<right; k++){
      if(L[i] <= R[j]){
         A[k] = L[i++];
      }else{
         A[k] = R[j++];
         cnt += n1-i; //mid+j-k-1
      }
   }
   return cnt;
}

ll Merge_Sort(int A[], int left, int right){
   int mid;
   ll v1, v2, v3;
   if(left+1 < right){
      mid=(left+right)/2;
      v1=Merge_Sort(A, left, mid);
      v2=Merge_Sort(A, mid, right);
      v3=Merge(A, left, mid, right);
      return v1 + v2 + v3;
   } else return 0;
}

int main(){
   int A[MAX], n;

   cin >> n;
   for(int i=0; i<n; i++) cin >> A[i];

   ll ans=Merge_Sort(A, 0, n);
   cout << ans << endl;

   return 0;
}
