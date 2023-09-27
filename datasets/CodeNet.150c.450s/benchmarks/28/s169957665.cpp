#include <iostream>
using namespace std;
typedef long long llong;
// k cars with max load of P can carry how many items?
int n;
int check(llong* weights,llong P,int k){
  int num = 0;
  for(int j=0;j<k;j++){
    llong load = 0;
    while(load+weights[num]<=P){
      load+=weights[num];
      num++;
      if(num==n) return n;
    }
  }
  return num;
}

int binarySearch(llong* weights,int k){
  llong lo = 0, hi = 10000*100000, mid;
  while(lo+1<hi){
    mid = (lo+hi)/2;
    int num = check(weights,mid,k);
    if(num>=n) hi = mid;
    else lo = mid;
  }
  return hi;
}
int main(){
  // n is item, k is cars
  int k;
  cin>>n>>k;
  llong* weights = new llong[n];
  for(int i=0;i<n;i++)
    cin>>weights[i];
  cout<<binarySearch(weights,k)<<endl;
}

