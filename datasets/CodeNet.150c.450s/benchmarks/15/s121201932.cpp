#include <iostream>
using namespace std;
#define MAX 10000

//int n,A[MAX];

int linearSearch(int n,int key,int A[]){
  int count=0;
  for(int i=0;i<n;i++){
    if(key==A[i]) count++;
    if(count!=0) break;
  }
  return count;
}


int main(){
  int key,m,sum=0,n;
  int A[MAX];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>key;
    sum+=linearSearch(n,key,A);
  }
  cout<<sum<<endl;
  return 0;
}