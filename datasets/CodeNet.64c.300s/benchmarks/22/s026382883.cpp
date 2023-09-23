#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int N, side1, side2, side3, i;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%d %d %d", &side1, &side2, &side3);
    if(side1 >= side2 && side1 >= side3){
      if(side1 * side1 == side2 * side2 + side3 * side3){
	printf("YES\n");
      }else{
	printf("NO\n");
      }
    }else if(side2 >= side1 && side2 >= side3){
      if(side2 * side2 == side1 * side1 + side3 * side3){
	printf("YES\n");
      }else{
	printf("NO\n");
      }
    }else{
      if(side3 * side3 == side2 * side2 + side1 * side1){
	printf("YES\n");
      }else{
	printf("NO\n");
      }
    }

  }

  return 0;
}