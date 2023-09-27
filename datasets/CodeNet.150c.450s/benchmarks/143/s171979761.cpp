#include<iostream>
using namespace std;

#define max 1000000

int arr[max];

int main(){
  
  int n; cin >> n;
  
  long long total = 0;
  
  for(int i=0;i<n;i++){
    int x; cin >> x;
    total += x;
    arr[x]++;
  }
  
  int m; cin >> m;
  
  while(m--){
    int a,b; cin >> a >> b;
    total -= (arr[a]*a);
    arr[b] += arr[a];
    total +=  arr[a] * b;
    arr[a] = 0;
    printf("%lli\n",total);

  }
  
    
  
  return 0;
}