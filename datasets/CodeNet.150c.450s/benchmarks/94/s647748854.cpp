#include <iostream>
using namespace std;
void print(int a[],int N,int b){
  int i;
  for(i=0;i<N;i++){
    if(i<N-1) cout<<a[i]<<" ";
    if(i==N-1) cout<<a[i]<<endl;  
}
  cout<<b<<endl;
}
void bubble(int a[],int N){
  int i,b=0,j,w=0,v;
  for(i=N-1;i>0+w;){
    w++;
    j=i;
    while(j>0){
    if(a[j]<a[j-1]){
      b++;     
      v=a[j];
      a[j]=a[j-1];
      a[j-1]=v;
    }
    j--;
    }
  }
  print(a,N,b);
}
int main(){
  int l;
  int N,i,a[100];
  cin>>N;
  for(i=0;i<N;i++){
    cin>>a[i];
  }
  bubble(a,N);
}