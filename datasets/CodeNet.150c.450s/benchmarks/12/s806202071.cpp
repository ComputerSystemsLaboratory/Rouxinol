#include<bits/stdc++.h>
using namespace std;
int parent(int i) {return i/2;}
int left(int i) {return i*2;}
int right(int i) {return i*2+1;}
int main(){
  int h,tree[100001];
  scanf("%d",&h);
  for(int i=1;i<=h;i++) scanf("%d",&tree[i]);
  for(int i=1;i<=h;i++){
    printf("node %d: key = %d, ",i,tree[i]);
    if(parent(i)>=1) printf("parent key = %d, ",tree[parent(i)]);
    if(left(i)<=h) printf("left key = %d, ",tree[left(i)]);
    if(right(i)<=h) printf("right key = %d, ",tree[right(i)]);
    printf("\n");
  }
  return 0;
}

    

