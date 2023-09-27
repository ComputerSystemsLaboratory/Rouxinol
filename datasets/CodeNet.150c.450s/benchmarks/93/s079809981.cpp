#include<iostream>
#include<algorithm>
using namespace std;

struct card{
  char mozi;
  int num;
};

bool compare_as_ints(card a,card b){
  return (a.num<b.num);
}
int partition(card A[],int p,int r){
  int i;
  card x,tmp;
  x=A[r];
  i=p-1;
  for(int j=p;j<=r-1;j++){
    if(A[j].num<=x.num){
      i=i+1;
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

void quicksort(card A[],int p,int r){
  int q;
  if(p<r){
  q=partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
  }
}

int main(){
  int n;
  cin>>n;

  card A[100000],B[100000];
  for(int i=0;i<n;i++){
    cin>>A[i].mozi>>A[i].num;
    B[i]=A[i];
  }

  quicksort(A,0,n-1);
  stable_sort(B,B+n,compare_as_ints);

  int miss=0;

for(int i=0;i<n;i++){
  if(A[i].mozi!=B[i].mozi){
    miss++;
  }
}
if(miss>0){
  cout<<"Not stable"<<endl;
}else{
  cout<<"Stable"<<endl;
}

  for(int i=0;i<n;i++){
    cout<<A[i].mozi<<' '<<A[i].num<<endl;
  }
  return 0;
}

