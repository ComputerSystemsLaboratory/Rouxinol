#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;



void CountingSort(int *a, int *b, int k, int n){
  
  int *c = new int[10001];
  
  for(int i=0;i<=k;i++){
    c[i] = 0;
  }

  for(int j=0;j<n;j++){
    c[a[j]]++;
  }

  for(int i=0;i<n;i++){
    // cout << c[i] << " ";
  }
  
  for(int i=1;i<=k;i++){
    c[i] = c[i] + c[i-1];
    // cout << c[i] << endl;
  }

  
  for(int j=n-1;j>=0;j--){
    
    b[c[a[j]]-1] = a[j];
    // cout << a[j];
    c[a[j]]--;

  }
}

int main(){
  
  int n;
  cin >> n;

  // c = new int [10001];
  int *a = new int [n];
  int *b = new int [n];
  for(int i=0;i<n;i++){
    cin >> a[i];
    // cout << a[i];
  }


  
  CountingSort(a, b, 10000, n);

  for(int i=0;i<n;i++){
    if(i!=0){cout<<" ";}
    cout << b[i];
  }
  cout << endl;
      
  
  // int ai = partition(a, 0, n-1);
  // cout << ai <<endl;
 
      
}