#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int selection_sort(int a[],int n){
  int mini,c=0;
  for(int i=0;i<n;i++){
    mini = i;
    for(int j=i;j<n;j++){
      if(a[j]<a[mini]){
        mini = j;
      }
    }
    if(mini!=i)c++,std::swap(a[i],a[mini]);
  }
  return c;
}

int main(){
  int n,a[100];
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int change = selection_sort(a,n);
  for(int i=0;i<n-1;i++){
    cout << a[i] << ' ';
  }
  cout << a[n-1] << endl;
  cout << change << endl;
}