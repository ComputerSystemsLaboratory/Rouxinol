#include<bits/stdc++.h>
using namespace std;
#define MAX 500000
int h,a[MAX+1];
void maheap(int i){
  int l,r,la;
  l = 2*i;
  r=2*i+1;

  if(l<=h&&a[l]>a[i])la=l;
  else la=i;
  if(r<=h&&a[r]>a[la])la=r;

  if(la!=i){
    swap(a[i],a[la]);
    maheap(la);
  }
}

int main(){
  cin >> h;
  for(int i=1;i<=h;i++)cin >>a[i];
  for(int i=h/2;i>=1;i--)maheap(i);
  for(int i=1;i<=h;i++){
    cout << " " << a[i];
  }
  cout << endl;
}