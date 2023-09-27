#include<iostream>
#include<algorithm>
using namespace std;
 
struct ATAD{
  int numb,did;
  char lac;
};
 
int Kat(ATAD VA[],int p,int r){
  ATAD axa = VA[r];
  int i=p-1;
  for(int j=p;j<r;j++){
    if(VA[j].numb<=axa.numb){
      i++;
      swap(VA[i],VA[j]);
    }
  }
  swap(VA[i+1],VA[r]);
  return i+1;
}
 
void qsot(ATAD A[],int p,int r){
  if(p<r){
    int qaa = Kat(A,p,r);
    qsot(A,p,qaa-1);
    qsot(A,qaa+1,r);
  }
}
 
void kakn(ATAD A[],int n){
  for(int i=1;i<n;i++){
    if(A[i-1].numb<A[i].numb)continue;
    if(A[i-1].did<A[i].did)continue;
    cout<<"Not stable"<<endl;
    return;
  }
  cout<<"Stable"<<endl;
}
 
int main(){
  int n;
  ATAD A[100000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i].lac>>A[i].numb;
    A[i].did=i;
  }
   
  qsot(A,0,n-1);
  kakn(A,n); 
  for(int i=0;i<n;i++){
    cout<<A[i].lac<<' '<<A[i].numb<<endl;
  }
   
  return 0;
}