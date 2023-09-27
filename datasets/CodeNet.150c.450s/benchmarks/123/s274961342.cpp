#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int n;
  int V[100000];
  int root;
  int sum=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>V[i];

  for(int i=0;i<n;i++){
    root = sqrt(V[i]);
    for(int j=2;;j++){
      if(j > root){
	sum++;break;
      }
      if(V[i] % j == 0)break;
    }
  }
  cout<<sum<<endl;

  return 0;
}