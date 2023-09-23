#include<iostream>

using namespace std;

int bubbleSort(int a[],int n){
  int cnt=0;
  bool swapped = true;
  while(swapped){
    swapped = false;
    for(int i=0;i<n-1;i++){
      if(a[i] > a[i+1]){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        swapped = true;
        cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  int n,a[100],cnt;
  cin >> n;
  for(int i=0;i<n;i++)cin >> a[i];
  cnt = bubbleSort(a,n);
  for(int i=0;i<n;i++)if(i==0)cout << a[i]; else cout << " " << a[i];
  cout << endl;
  cout << cnt << endl;
}