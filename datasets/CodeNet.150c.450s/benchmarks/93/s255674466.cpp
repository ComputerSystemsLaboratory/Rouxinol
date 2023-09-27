#include<iostream>

using namespace std;

#define N 100001

#define SENTINEL 999999998

//Merge function
void Merge(int a[],char c[],int left,int mid,int right){
  
  int n1,n2,i,j;
  int L[N],R[N];
  char Lc[N],Rc[N];
  n1=mid-left;
  n2=right-mid;

  for(i=0;i<n1;i++){
    L[i]=a[left+i];
    Lc[i]=c[left+i];
  }

  for(i=0;i<n2;i++){
    R[i]=a[mid+i];
    Rc[i]=c[mid+i];
  }

  //L[n1]=SENTINEL,R[n2]=SENTINEL
  L[n1]=SENTINEL;
  R[n2]=SENTINEL;

  i=0;
  j=0;
  for(int k=left;k<right;k++){

    if(L[i]<=R[j]){
      a[k]=L[i];
      c[k]=Lc[i];
      i++;
    }
    else{
      a[k]=R[j];
      c[k]=Rc[j];
      j++;
    }
  }

}

//MergeSort function
void MergeSort(int a[],char c[],int left,int right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    MergeSort(a,c,left,mid);
    MergeSort(a,c,mid,right);
    Merge(a,c,left,mid,right);
  }

}


int Partition(int a[],char c[],int p,int r){
  int x,i,j,st;
  char stc;

  x=a[r];
  i=p-1;

  for(j=p;j<=r-1;j++){
    if(a[j]<=x){
      i++;

      //exchange a[i] and a[j]
      st=a[i];
      a[i]=a[j];
      a[j]=st;

      stc=c[i];
      c[i]=c[j];
      c[j]=stc;

    }
  }

  //exchange a[i] and a[j]
    st=a[i+1];
    a[i+1]=a[r];
    a[r]=st;

    stc=c[i+1];
    c[i+1]=c[r];
    c[r]=stc;

    return i+1;

}


void QuickSort(int a[],char c[],int p,int r){
  int q;
  if(p<r){
    q=Partition(a,c,p,r);
    QuickSort(a,c,p,q-1);
    QuickSort(a,c,q+1,r);
  }
}

int main(){
 
  int n,i,a1[N],a2[N];
  char c1[N],c2[N];
  bool flag=true;
  cin >>n;

  for(i=0;i<n;i++){
    cin >>c1[i]>>a1[i];
    a2[i]=a1[i];
    c2[i]=c1[i];
  }


  QuickSort(a1,c1,0,n-1);
  MergeSort(a2,c2,0,n);

  for(i=0;i<n;i++){
    if(c1[i]!=c2[i]){
      cout <<"Not stable"<<endl;
      flag=false;
      break;
    }
  }

  if(flag==true) cout <<"Stable"<<endl;

  for(i=0;i<n;i++){
    cout <<c1[i]<<" "<<a1[i]<<endl;;
  }

  /*  cout <<endl;
  for(i=0;i<n;i++){
    cout <<c2[i]<<" "<<a2[i]<<endl;;
    }*/
  return 0;
}