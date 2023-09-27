#include<bits/stdc++.h>
#define MAX 2000005
#define INF 1234567890
using namespace std;
int H,a[MAX];
void maheap(int i){
  int l,r,la;
  l = 2*i;
  r=2*i+1;

  if(l<=H&&a[l]>a[i])la=l;
  else la=i;
  if(r<=H&&a[r]>a[la])la=r;

  if(la!=i){
    swap(a[i],a[la]);
    maheap(la);
  }
}
int extract(){
  int mav;
  if(H<1)return -INF;
  mav=a[1];
  a[1]=a[H];
  H--;
  maheap(1);
  return mav;
}
void up(int i,int key){
  if(key<a[i])return;
  a[i]=key;
  while(i>1&&a[i/2]<a[i]){
    swap(a[i],a[i/2]);
    i=i/2;
  }
}
void insert(int key){
  H++;
  a[H]=-INF;
  up(H,key);
}
int main(){
  int key;
  char com[10];
  while(1){
    cin >> com;
    if(com[0]=='e'&&com[1]=='n')break;
    if(com[0]=='i'){
      cin >> key;
      insert(key);
    }
    else{
      cout << extract() << endl;
    }
  }
  return 0;

}