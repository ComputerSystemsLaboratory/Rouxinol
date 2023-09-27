#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>

static const int MAX = 200000;
using namespace std;

struct Card {char suit, value;};

void trace(Card a[], int n){
  for(int i = 0; i < n; i++){
    if(i) cout << " ";
    cout << a[i].suit << a[i].value;
  }
  cout << endl;
}

void sSort(Card a[], int n){
  for(int i=0; i < n; i++){
    int mini = i;
    for(int j=i+1; j<n; j++){
      if(a[mini].value > a[j].value){
        mini = j;
      }
    }
    if(mini != i){
      swap(a[mini], a[i]);
    }
  }
}

void bSort(Card b[], int n){
  for(int i=0; i<n; i++){
    for(int j = n-1; j >= i+1; j--){
      if(b[j-1].value > b[j].value){
        swap(b[j-1], b[j]);
      }
    }
  }
}

bool isStable(Card a[], Card b[],int n){
  for(int i=0; i<n; i++){
    if(a[i].suit != b[i].suit) return false;
  }
  return true;
}


int main(int argc, const char * argv[]) {
  int n;
  Card a[MAX], b[MAX];
  
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i].suit >> a[i].value;
  }
  
  for(int i=0; i<n; i++)
    b[i] = a[i];
  
  sSort(a, n);
  bSort(b, n);
  
  trace(b, n);
  cout << "Stable" << endl;
  trace(a, n);
  if(isStable(a,b,n)){
    cout << "Stable" << endl;
  } else{
    cout << "Not stable" << endl;
  }
  return 0;
}
