#include<iostream>
#include <vector>
using namespace std;
   
int Merge(int A[],int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  int i,j,k;
  int L[n1+1],R[n2+1];
     
  for(i=0;i<n1;i++)L[i]=A[left+i];
  for(i=0;i<n2;i++)R[i]=A[mid+i];
  L[n1]=1000000000;
  R[n2]=1000000000;
     
  i=j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      j++;
    }
  }
  return right-left;
}
   
int Merge_Sort(int A[],int left,int right){
  int mid,res=0;
  if(left+1<right){
    mid=(left+right)/2;
   
    res+=Merge_Sort(A,left,mid);
    res+=Merge_Sort(A,mid,right);
    res+=Merge(A,left,mid,right);
       
  }
  return res;
}

int Partition(vector<int> &vec, int left, int right) {
    int split = vec[right];
    int i = left - 1;
    for (int j = left; j < right; ++j) {
        if (vec[j] <= split) {
            ++i;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[right]);
 
    return i + 1;
}
 
void QuickSort(vector<int> &vec, int left, int right) {
    if ((left < right) && (left >= 0)) {
        int q = Partition(vec, left, right);
        QuickSort(vec, left, q - 1);
        QuickSort(vec, q + 1, right);
    }
}

int main(){
  int i,x,n,S[500000]; 
  cin>>n;
  for(i=0;i<n;i++)cin>>S[i];

  vector<int> vec(S,S + n);
  QuickSort(vec, 0, vec.size() - 1);
   
  x=Merge_Sort(S,0,n);
     
  for(i=0;i<n;i++){
    if(i)cout<<" ";
    cout<<vec[i];
  }
  cout<<endl;
  cout<<x<<endl;
  return 0;
}
