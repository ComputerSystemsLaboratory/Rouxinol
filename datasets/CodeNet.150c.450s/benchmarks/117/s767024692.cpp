#include<iostream>
#include<limits.h>
#define SENTINEL INT_MAX 
using namespace std;
typedef long long ll;
ll counter=0;
void Merge(long long S[],int left,int mid,int right){
  int n1 = mid-left;
  int n2 = right-mid;
  ll L[n1+1];
  ll R[n2+1];
  
  for(int i=0;i<n1;i++){
    L[i] = S[left+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=S[mid+i];
  }
  L[n1]=R[n2]=SENTINEL;
  int i=0;
  int j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      S[k]=L[i];
      i=i+1;
      counter++;
    }
    else{
      S[k]=R[j];
      j=j+1;
      counter++;
    }
  }
}
  
void Merge_Sort(long long S[],int left,int right){
   
  if(left+1<right){
    int mid = (left+right)/2;
    Merge_Sort(S,left,mid);
    Merge_Sort(S,mid,right);
    Merge(S,left,mid,right);
  }
}
  
  
  
int main(){
  int n;
  ll S[600000];
  
  cin >> n;
    for(int i=0;i<n;i++){
      cin >> S[i];
    }
  
    Merge_Sort(S,0,n);
  
    for(int i=0;i<n;i++){
      cout << S[i];
      if(i != n-1)cout << " ";
    }
    cout << endl;
    cout << counter << endl;
  
  return 0;
}
