#include <iostream>
#define MAX 250
using namespace std;

int nodes[MAX];
int n;

void print(int i){
  printf("node %d: key = %d, ",i,nodes[i]);
  if(i != 1){
    printf("parent key = %d, ",nodes[i/2]); 
  }
  if(i * 2 <= n){
    printf("left key = %d, ",nodes[i*2]);
  }
  if(i * 2 + 1 <= n){
    printf("right key = %d, ",nodes[i*2+1]);
  }
  printf("\n");
}

int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>nodes[i];
  }

  for(int i=1;i<=n;i++){
    print(i);
  }
}