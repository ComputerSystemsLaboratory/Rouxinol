#include <iostream>
using namespace std;

int main(){
  int a;
  int i, j, k;
  int count;

  while(cin>>a){
    count=0;
    for(i=0; i<10; i++){
      for(j=0; j<10; j++){
        for(k=0; k<10; k++){
          if(i+j+k<=a && i+j+k>=a-9) count++;
        }
      }
    }
    printf("%d\n", count);
  }

  return 0;
}