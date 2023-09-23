#include <iostream>
#include <string>

using namespace std;

int bubbleSort(int *a, int n){
  int cnt=0;
  bool flag=true;
  while(flag){
    flag=false;
    for(int j=n-1;j>0;j--){
      if(a[j]<a[j-1]){
	swap(a[j],a[j-1]);
	flag=true;
	cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  int n;
  int *a = new int[n];
  cin >> n;
  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    a[i] = tmp;
  }

  int numExchange = bubbleSort(a, n);
  for(int i=0;i<n;i++){
    if(i!=0){cout << " ";}
    cout << a[i];
  } 
  cout << endl;

  cout << numExchange << endl;
  
}