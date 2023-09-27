#include <iostream>
using namespace std;

int main(){
  int n, v;
  int i, j, k;
  cin>>n;
  int a[n];
  for(i = 0; i < n; i++){
    cin>>a[i];
  }

  for(i = 0; i < n; i++){

    v = a[i];
    j = i -1;
    while((j >= 0)&&(a[j] > v)){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;

    for(k = 0; k < n-1; k++){
      cout<<a[k]<<" ";
    }
    cout<<a[n-1];
    /*if(i != n-1) */cout<<endl;
  }
}