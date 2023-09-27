#include <iostream>
using namespace std;

int main(){
  int n;
  int max=0;
  int seq[101];
  int i;

  for(i=0; i<=100; i++) seq[i]=0;
  while(cin>>n){
    seq[n]++;
    if(max<seq[n]) max=seq[n];
  }
  for(i=0; i<=100; i++)
    if(seq[i]==max) printf("%d\n", i);

  return 0;
}