#include <stdio.h>
struct trump{
  char moji;
  int num;
};

void bubble(struct trump *,int);
void insertion(struct trump *,int);
int judge(struct trump *,struct trump *,int);

void bubble(struct trump k1[],int n){
  int i,j;
  struct trump tmp;
  for(i=0;i<n;i++){
    for(j=n-1;j>i;j--){
      if(k1[j].num < k1[j-1].num) {
	tmp = k1[j];
	k1[j] = k1[j-1];
	k1[j-1] = tmp;
      }
    }
  }
}

void insertion(struct trump k2[],int n){
  int i,j;
  struct trump tmp;
  int minj;
  for(i=0;i<n;i++){
    minj = i;
    for(j=i;j<n;j++){
      if(k2[minj].num > k2[j].num)minj = j;
    }
    tmp = k2[minj];
    k2[minj]=k2[i];
    k2[i] = tmp;
  }
}

int judge(struct trump k1[],struct trump k2[],int n){
  int i;
  for(i=0;i<n;i++){
    if(k1[i].moji != k2[i].moji) return 0;
  }
  return 1;
}

int main(){
  struct trump k[36], k2[36];
  int i,j,n;
  char ik;
  scanf("%d%c",&n,&ik);
  for(i=0;i<n;i++){
    scanf("%c%d%c",&k[i].moji,&k[i].num,&ik);
  }
  for(i=0;i<n;i++){
    k2[i]=k[i];
  }
  bubble(k,n);
  insertion(k2,n);
  for(i=0;i<n-1;i++){
    printf("%c%d ",k[i].moji,k[i].num);
  }
  
  printf("%c%d\nStable\n",k[i].moji,k[i].num);
  for(i=0;i<n-1;i++){
    printf("%c%d ",k2[i].moji,k2[i].num);
  }
  printf("%c%d\n",k2[i].moji,k2[i].num);
  if(judge(k,k2,n)) printf("Stable\n");
  else printf("Not stable\n");
  
  return 0;
}