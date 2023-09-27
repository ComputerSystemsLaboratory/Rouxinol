#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
const double EPS = 1e-10;//sample:if((double)>=(double)+EPS)
#define CLR(a) memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)  cerr << #x << " = " << (x) << endl;//debug
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;
char C[100000];
char C2[100000];

void merge(int A[], int left, int mid, int right){
  int n1=mid-left,n2=right-mid,L[100000],R[100000];
  char Lc[100000]={},Rc[100000]={};
  for(int i=0;i<n1;i++){L[i] = A[left+i];Lc[i] = C2[left+i];}
  for(int i=0;i<n2;i++){R[i] = A[mid+i];Rc[i] = C2[mid+i];}
  L[n1]=R[n2]=INT_MAX;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]) {
      A[k]=L[i];
      C2[k]=Lc[i];
      i++;
    }
    else {
      A[k]=R[j];
      C2[k]=Rc[j];
      j++;
    }
  }
}
void mergeSort(int A[], int left, int right){
  if(left+1<right){
    int mid = (left + right) / 2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}

void bsort(int  A[],int n){
  bool flag = 1;
  while(flag){
    flag = 0;
    for(int j = n-1; j >= 1; j--){
      if(A[j] < A[j-1]){
	swap(A[j],A[j-1]);
	swap(C2[j],C2[j-1]);
	flag = 1;
      }
    }
  }
}

int partition(int A[], int p, int r){
  int x=A[r], i=p-1;
  for(int j=p;j<r;j++)
    if(A[j]<=x){
      i++;
      swap(A[i],A[j]);
      swap(C[i],C[j]);
    }
  swap(A[i+1],A[r]);
  swap(C[i+1],C[r]);
  return i+1;
}
void quicksort(int A[], int p, int r){
  if(p<r){
    int q=partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
  }
}
int main(){
  int n,A[100000],B[100000];
  bool check=true;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>C[i]>>A[i];
    B[i]=A[i];
    C2[i]=C[i];
  }
  mergeSort(B,0,n);
  //bsort(B,n);
  quicksort(A,0,n-1);
  for(int i=0;i<n;i++)if(C[i]!=C2[i]){check=false;break;}
  if(check)cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  for(int i=0;i<n;i++){
    cout<<C[i]<<" "<<A[i]<<endl;
  }
  return 0;
}

