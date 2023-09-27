#include<cstdio>

using namespace std;

int main(void){
  int heaps[250]={0};
  int heap_size=0;
  scanf("%d",&heap_size);
  int i=0;
  for(i=0;i<heap_size;i++){
    scanf("%d",&(heaps[i]));
  }

  for(i=0;i<heap_size;i++){
    printf("node\x0020%d:\x0020",i+1);
    printf("key\x0020=\x0020%d,\x0020",heaps[i]);
    if(i!=0){
      printf("parent\x0020key\x0020=\x0020%d,\x0020",heaps[(i+1)/2-1]);
    }
    if(2*(i+1)<=heap_size){
      printf("left\x0020key\x0020=\x0020%d,\x0020",heaps[(i+1)*2-1]);
      if(2*(i+1)+1<=heap_size){
	printf("right\x0020key\x0020=\x0020%d,\x0020",heaps[(i+1)*2]);
      }
    }
    printf("\n");
  }
  return 0;
}