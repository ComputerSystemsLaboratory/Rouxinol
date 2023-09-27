#include <stdio.h>

struct freqency {
  
  int num;
  int freq;

}f[1000];

int main(void) {

  int n;

  int size=0;
  int max_freq=0;

  int mode[1000];
  int s=0;

  int i,j,temp;
  int flag;

  while(scanf("%d",&n)!=EOF) {
    //for(j=0;j<12;j++) {
    //scanf("%d",&n);
    flag=0;

    for(i=0;i<size;i++) {

      if(f[i].num==n) {
	flag=1;
	f[i].freq++;
      }

    }

    if(flag==0) {
	f[size].num=n;
	f[size].freq=1;
	size++;
    }

  }
  
  //for(j=0;j<10;j++) printf("%d %d\n",f[j].num,f[j].freq);

  for(i=0;i<size;i++) {

    if(max_freq<=f[i].freq) {
      max_freq=f[i].freq;
      mode[s]=f[i].num;
      s++;
    }

  }

  for(i=0;i<s;i++) {
    for(j=0;j<s-i-1;j++) {
      if(mode[j]>mode[j+1]) {
	temp=mode[j];
	mode[j]=mode[j+1];
	mode[j+1]=temp;
      }
    }
  }

  for(i=0;i<s;i++) {
    printf("%d\n",mode[i]);
  }

  

  return 0;

}

   

    