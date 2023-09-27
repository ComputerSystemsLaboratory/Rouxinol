#include <iostream>
using namespace std;

int main(){
  int a[4];
  int b[4];
  int appear[10];
  int i;
  int hit, blow;

  for(i=0; i<10; i++) appear[i]=0;
  while(cin>>a[0]){
    hit=0; blow=0;
    appear[a[0]]=1;
    for(i=1; i<4; i++){
      cin>>a[i];
      appear[a[i]]=1;
    }
    for(i=0; i<4; i++) cin>>b[i];

    for(i=0; i<4; i++){
      if(a[i]==b[i]) hit++;
      else blow+=appear[b[i]];
    }

    for(i=0; i<4; i++) appear[a[i]]=0;
    printf("%d %d\n", hit, blow);
  }

  return 0;
}