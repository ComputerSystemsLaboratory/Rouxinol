#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int n; cin >> n;
  int a[n+1];
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  printf("node 1: key = %d, left key = %d, right key = %d, \n",a[1],a[2],a[3]);
  for(int id=2;id<=n;id++){
    printf("node %d: key = %d, ",id,a[id]);
    if(2*id+1<=n){
      printf("parent key = %d, left key = %d, right key = %d, \n",a[id/2],a[2*id],a[2*id+1]);
    }else if(2*id<=n){
      printf("parent key = %d, left key = %d, \n",a[id/2],a[2*id]);
    }else{
      printf("parent key = %d, \n",a[id/2]);
    }
  }
}