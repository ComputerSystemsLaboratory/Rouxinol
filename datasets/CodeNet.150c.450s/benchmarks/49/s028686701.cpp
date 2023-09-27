#include <stdio.h>

int main(void) {
  int max,min;
  int num;
  int avarage;
  int avsum;
  do{
    scanf(" %d",&num);
    int rawdata[1000] = {0};
    if(num == 0) return 0;
    else max = 0,min = 1000,avsum = num,avarage = 0;//initialize
    while(num > 0){
      num--;
      scanf(" %d", &rawdata[num]);
    }
    int i = 0;
    for(i = 0; i < avsum;i++) {
      avarage += rawdata[i];
      if(max < rawdata[i]) max = rawdata[i];
      if(min > rawdata[i]) min = rawdata[i];
    }
    
    avarage -= max;
    avarage -= min;

    avarage /= avsum - 2;
    printf("%d\n", avarage);
  }while(1);
}