#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int main(void){
  int i;
  int n, G_list[MAX];
  int G[MAX+1][MAX+1]={0};
  
  scanf("%d", &n);

  for(i=0; i<n; i++){
    int cnt, num, m;

    scanf("%d %d", &num, &cnt);
    G_list[i]=num;

    for(int j=0; j<cnt; j++){
      scanf("%d", &m);
      G[G_list[i]][m]=1;
    }
  }

  for(int i=0; i<n; i++){
    int num=G_list[i];
    for(int j=0; j<n; j++){
      int m=G_list[j];

      if(j) printf(" ");
      printf("%d", G[num][m]);
    }
    printf("\n");
  }
  
  return 0;
}

