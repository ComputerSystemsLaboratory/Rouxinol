#include<iostream>
#define MAX 20000000
#define ll long long 
using namespace std;

struct Data{
  int D;
  ll P;
};

struct Data D_P[MAX];
struct Data L[MAX/2+2],R[MAX/2+2];

void merge(int n,int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  for(int i=0;i<n1;i++) L[i]=D_P[left+i];
  for(int i=0;i<n2;i++) R[i]=D_P[mid+i];
  L[n1].P=R[n2].P=MAX;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i].P<=R[j].P) D_P[k]=L[i++];
    else D_P[k]=R[j++];
  }
}

void mergeSort(int n,int left,int right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    mergeSort(n,left,mid);
    mergeSort(n,mid,right);
    merge(n,left,mid,right);
  }
}

int main(){
  int N;
  ll M,ans;  
  
  while(1){
    ans=0;
    cin>>N>>M;
    if(N+M==0)break;

    for(int i=0;i<N;i++)D_P[i].D=D_P[i].P=0;
    
    for(int i=0;i<N;i++){
      cin>>D_P[i].D>>D_P[i].P;
    }

    mergeSort(N,0,N);

    // for(int i=0;i<N;i++) cout<<D_P[i].D<<" "<<D_P[i].P<<endl;
    
    for(int i=N-1;i>=0;i--){
      if(D_P[i].D<M) M-=D_P[i].D;
      else if(M<=D_P[i].D&&M!=0){
	D_P[i].D-=M;
	M=0;
	ans+=D_P[i].P*D_P[i].D;
      }else if(M==0){
	ans+=D_P[i].P*D_P[i].D;
      }
      //if(M<0)  cout<<<<M<<endl;
    }
    //    cout<<"A"<<endl;
    cout<<ans<<endl;
  }
  
  return 0;
}