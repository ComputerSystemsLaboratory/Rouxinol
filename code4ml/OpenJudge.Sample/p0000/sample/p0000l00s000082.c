#include <stdio.h>

main(){
  int i = 0;
  int data[10] = {0};
  int ans[3] = {0};
  
  for(i = 0;i < 10; i++){
    scanf("%d", &data[i]);

    if(data[i] >= ans[0]){
      ans[2] = ans[1];
      ans[1] = ans[0];
      ans[0] = data[i];
    }else if(data[i] >= ans[1]){
      ans[2] = ans[1];
      ans[1] = data[i];
    }else if(data[i] >= ans[2]){
      ans[2] = data[i];
    }
  }
  for(i = 0; i < 3; i++){
    printf("%d\n", ans[i]);
  }
  
  return 0;
}