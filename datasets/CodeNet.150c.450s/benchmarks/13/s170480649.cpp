#include <cstdio>
#include <cstring>

int main(){
  char ring[101], p[101], line[505];
  scanf("%s", ring);
  scanf("%s", p);

  int ring_length, p_length;
  ring_length = strlen(ring);
  p_length = strlen(p);

  for(int i = 0; i < 5; i++){
    strcpy((line+i*(ring_length)),ring);
  }

  if(strstr(line, p) != NULL){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  };

  return 0;
}