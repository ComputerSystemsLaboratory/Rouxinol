#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
#define all(a) (a).begin(),(a)end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)

int main() {

  int heap[250];

  int H;
  scanf("%d",&H);

  rep(i,H){
    scanf("%d",&heap[i]);
  }

  rep(i,H){
    printf("node %d: key = %d, ",i+1,heap[i]);
    if((i-1)/2>=0&&i!=0) printf("parent key = %d, ",heap[(i-1)/2]);
    if(2*i+1<H) printf("left key = %d, ",heap[2*i+1]);
    if(2*i+2<H) printf("right key = %d, ",heap[2*i+2]);
    putchar('\n');
  }
}