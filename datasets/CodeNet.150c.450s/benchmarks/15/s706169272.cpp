#include <iostream>
using namespace std;
#define MAX 10000

int A[MAX];
int n,m,key;

int linearSerch();

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cin>>m;
  int count=0;
  for(int i=0;i<m;i++){
    cin>>key;
    count+=linearSerch();
  }

  cout<<count<<endl;
  return 0;
}

int linearSerch(){
  for(int i=0;i<n;i++){
    if(A[i]==key){
      return 1;
    }
  }
  return 0;
}