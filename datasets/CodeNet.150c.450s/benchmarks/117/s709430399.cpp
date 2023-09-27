#include <iostream>
using namespace std;

int cnt=0;

void merge(int s[],int left,int mid,int right){
  int i,j,k;
  int a=mid-left;
  int b=right-mid;

  int* l=new int[a+1];
  int* r=new int[b+1];

  for(i=0; i<a; i++){
    l[i]=s[left+i];
  }
  for(i=0; i<b; i++){
    r[i]=s[mid+i];
  }

  l[a]=1000000001;
  r[b]=1000000001;

  i=0;
  j=0;
  for(k=left; k<right; k++){
    if(l[i]<=r[j]){
      s[k]=l[i];
      i++;
      cnt++;
    }else{
      s[k]=r[j];
      j++;
      cnt++;
    }
  }

  delete[] l;
  delete[] r;
}

void mergeSort(int s[],int left,int right){
  if(left+1>=right)return;

  int mid=(left+right)/2;
  mergeSort(s,left,mid);
  mergeSort(s,mid,right);
  merge(s,left,mid,right);
}

int main(){
  int n;
  cin >> n;

  int s[n];
  for(int i=0; i<n; i++){
    cin >> s[i];
  }

  mergeSort(s,0,n);

  for(int i=0; i<n; i++){
    if(i==n-1){
      cout << s[i] << "\n";
    }else{
      cout << s[i] << " ";
    }
  }

  cout << cnt << "\n";

  return 0;
}
