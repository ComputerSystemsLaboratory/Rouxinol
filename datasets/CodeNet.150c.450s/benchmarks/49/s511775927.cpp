#include <cstdio>

using namespace std;

int main(){
  int min,max,sum,n,score;

  while(1){
    scanf("%d",&n);
    if(!n) break;

    max=0;min=10000;sum=0;

    for(int i=0;i<n;i++){
        scanf("%d",&score);
        if(max<score) max=score;
        if(min>score) min=score;
        sum+=score;
    }

    printf("%d\n",(sum-max-min)/(n-2));
  }
    return 0;
}