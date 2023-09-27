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

void HeapBuild(vector<int> &vec, int root, int len) {
    int lchild = root * 2 + 1;
    if (lchild < len) {
        int flag = lchild;  // 保存左右孩子节点中的最大值下标
        int rchild = lchild + 1;
        if (rchild < len) {
            if (vec[rchild] > vec[flag]) {
                flag = rchild;
            }
        }
 
        if (vec[root] < vec[flag]) {
            std::swap(vec[root], vec[flag]);
            HeapBuild(vec, flag, len);
        }
    }
}
 
void HeapSort(vector<int> &vec) {
    for (int i = vec.size() / 2; i >= 0; --i) {
        HeapBuild(vec, i, vec.size());
    }
 
    for (int j = vec.size() - 1; j > 0; --j) {
        std::swap(vec[0], vec[j]);
        HeapBuild(vec, 0, j);
    }
}

int main(){
  int i,x,n,S[500000]; 
  cin>>n;
  for(i=0;i<n;i++)cin>>S[i];

  vector<int> vec(S,S + n);
  HeapSort(vec);
   
  x=Merge_Sort(S,0,n);
     
  for(i=0;i<n;i++){
    if(i)cout<<" ";
    cout<<vec[i];
  }
  cout<<endl;
  cout<<x<<endl;
  return 0;
}
