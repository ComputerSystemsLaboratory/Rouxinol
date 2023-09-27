#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int bubble_sort(int a[],int n){
  int c=0;
  for(int i=0;i<n;i++){
    for(int i=1;i<n;i++){
      if(a[i-1]>a[i]){
        c++;
        std::swap(a[i-1],a[i]);
      }
    }
  }
  return c;
}

int main(){
  int n,a[100];
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int change = bubble_sort(a,n);
  for(int i=0;i<n-1;i++){
    cout << a[i] << ' ';
  }
  cout << a[n-1] << endl;
  cout << change << endl;
}