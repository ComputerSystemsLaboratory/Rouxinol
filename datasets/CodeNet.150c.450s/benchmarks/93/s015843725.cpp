#include <bits/stdc++.h>
using namespace std;

#define AMAX 100001


struct card{
  char mark;
  int value;
  int cnt;
};

card a[AMAX];
int partion(int q, int r){
  int x = a[r].value;
  int i = q-1;
  for(int j = q; j < r; j++){
    if(a[j].value <= x){
      i = i + 1;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[r]);
  return i+1;
}


void quicksort(int p, int r){

  if(p < r){
    int q;
    q = partion(p,r);
    quicksort(p,q-1);
    quicksort(q+1,r);
  }
}

int main(){

  int n;
  scanf("%d",&n);

  for(int i = 0; i < n; i++){
    scanf(" %c %d",&a[i].mark,&a[i].value);
    a[i].cnt = i;
  }

  quicksort(0,n-1);
  int junge = 0;

  for(int i = 1; i < n; i++){
    if(a[i-1].value == a[i].value&&a[i-1].cnt>a[i].cnt)junge=1;
  }
  if(junge == 1) printf("Not stable\n");
  else  printf("Stable\n");

  for(int i = 0; i < n; i++){
    printf("%c %d\n",a[i].mark,a[i].value);
  }

}