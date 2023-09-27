#include<iostream>
#include<cstdio>
#include<limits.h>
#define SENTINEL INT_MAX
using namespace std;
typedef long l;
int n;

void Merge(char idID[],char ID[],long S[],int left,int mid,int right){
  int n1 = mid-left+1;
  int n2 = right-mid;
  l L[n1+3];
  l R[n2+3];
  char CL[n1+3];
  char CR[n2+3];

  for(int i=1;i<=n1;i++){
    L[i] = S[left+i-1];
    CL[i] = idID[left+i-1];
  }
  for(int j=1;j<=n2;j++){
    R[j]=S[mid+j];
    CR[j]=idID[mid+j];
  }
  L[n1+1]=R[n2+1]=SENTINEL;
  int i=1;
  int j=1;
  for(int k=left;k<=right;k++){
    if(L[i]<=R[j]){
      S[k]=L[i];
      idID[k] = CL[i];
      i=i+1;
    }
    else{
      S[k]=R[j];
      idID[k] = CR[j];
      j=j+1;
    }
  }
}

void Merge_Sort(char idID[],char ID[],long S[],int left,int right){
  if(left<right){
    int mid = (left+right)/2;
    Merge_Sort(idID,ID,S,left,mid);
    Merge_Sort(idID,ID,S,mid+1,right);
    Merge(idID,ID,S,left,mid,right);
  }
}




int Partition(char ID[],l A[],l p,l r){
  l x = A[r];
  l i = p-1;
  for(int j=p;j<r;j++){
    if(A[j] <= x){
      i = i+1;
      char ch = ID[i];
      ID[i] = ID[j];
      ID[j] = ch;
      l h=A[i];
      A[i] = A[j];
      A[j] = h;
    }
  }
  char ch = ID[i+1];
  ID[i+1] = ID[r];
  ID[r] = ch;
  l h = A[i+1];
  A[i+1] = A[r];
  A[r] = h;
  return i+1;
}

void Quicksort(char ID[],l A[],l p,l r){
  if(p<r){
    l q = Partition(ID,A,p,r);
    Quicksort(ID,A,p,q-1);
    Quicksort(ID,A,q+1,r);
  }
}


int main(){
  
  while(scanf("%d",&n) != EOF){
    char *ID = new char[n+2];
    l *A = new l[n+2];
    l *idA = new l[n+2];
    char *idID = new char[n+2];
    l k=0;
    
    for(int i=1;i<=n;i++){
      cin >> ID[i] >> A[i];
      idID[i] = ID[i];
      idA[i] = A[i];
      if(k<A[i])k=A[i];
    }
   
    Merge_Sort(idID,ID,idA,1,n);
    
    
    /*
    cout << "--------------------------" << endl;
    for(int i=1;i<=n;i++){
      // printf("%c %d\n",idID[i],idA[i]);
      cout << idID[i] << " " << idA[i] << endl;
    }
    cout << "---------------------------" << endl;
    */

    Quicksort(ID,A,1,n);
    bool stable = true;
    for(int i=1;i<=n;i++){
      if(idID[i] != ID[i])stable = false;
    }

    if(stable)printf("Stable\n");
    else printf("Not stable\n");
    for(int i=1;i<=n;i++){
      printf("%c %ld\n",ID[i],A[i]);
    }
    
    delete [] ID;
    delete [] A;
    delete [] idID;
    delete [] idA;
  }
  return 0;
}