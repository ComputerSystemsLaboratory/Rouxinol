#include<iostream>
#define INF 2000000000
typedef struct{
  char c;
  int n;
}data;
int partition(data*,int,int);
void quickSort(data*,int,int);
void merge(int*,int,int,int);
void mergeSort(data*,int,int);
int main(){
  int n;
  std::cin>>n;
  data A[n],B[n];
  for(int i=0;i<n;i++){
    std::cin>>A[i].c>>A[i].n;
    B[i]=A[i];
  }
  quickSort(A,0,n-1);
  mergeSort(B,0,n);
  bool stable=true;
  for(int i=0;i<n;i++){
    if(A[i].c!=B[i].c){
      stable=false;
      break;
    }
  }
  std::cout<<(stable?"Stable\n":"Not stable\n");
  for(int i=0;i<n;i++) std::cout<<A[i].c<<" "<<A[i].n<<"\n";
  return 0;
}
int partition(data *A,int p,int r){
  int i=p-1;
  data tmp,x=A[r];
  for(int j=p;j<=r-1;j++){
    if(A[j].n<=x.n){
      i++;
      tmp=A[i];
      A[i]=A[j];
      A[j]=tmp;
    }
  }
  tmp=A[i+1];
  A[i+1]=A[r];
  A[r]=tmp;
  return i+1;
}
void quickSort(data *A, int p, int r){
  int q;
  if(p < r){
    q = partition(A, p, r);
    quickSort(A, p, q-1);
    quickSort(A, q+1, r);
  }
}
void merge(data *A,int l,int m,int r){
  int n1=m-l,n2=r-m, i, j;
  data L[n1+1],R[n2+1];
  for(i=0;i<n1;i++) L[i]=A[l+i];
  for(i=0;i<n2;i++) R[i]=A[m+i];
  L[n1].n=R[n2].n=INF;
  i=j=0;
  for(int k=l;k<r;k++){
    if(L[i].n<=R[j].n){
      A[k]=L[i];
      i++;
    }
    else{
      A[k]=R[j];
      j++;
    }
  }
}
void mergeSort(data *A,int l,int r){
  int m;
  if(l+1<r){
    m=(l+r)/2;
    mergeSort(A,l,m);
    mergeSort(A,m,r);
    merge(A,l,m,r);
  }
}