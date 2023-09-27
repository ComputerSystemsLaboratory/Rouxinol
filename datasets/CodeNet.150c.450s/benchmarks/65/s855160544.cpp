#include <iostream>
#include <utility>
#include <string>

using namespace std;

struct Card{char suit; int value;};

void bubbleSort(struct Card C[],int n){
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(C[j].value<C[j-1].value) swap(C[j],C[j-1]);
    }
  }
}

void selectionSort(struct Card C[],int n){
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(C[j].value<C[minj].value) minj=j;
    }
    swap(C[i],C[minj]);
  }
}

int main(){
  int n; cin >> n;
  struct Card C[n],D[n];
  for(int i=0;i<n;i++){
    string str;
    cin >> str;
    C[i].suit=str[0];
    D[i].suit=str[0];
    C[i].value=str[1]-'0';
    D[i].value=str[1]-'0';
  }
  bubbleSort(C,n);
  for(int i=0;i<n;i++){
    if(i==n-1) cout << C[i].suit << C[i].value << endl;
    else cout << C[i].suit << C[i].value << " ";
  }
  cout << "Stable" << endl;
  selectionSort(D,n);
  for(int i=0;i<n;i++){
    if(i==n-1) cout << D[i].suit << D[i].value << endl;
    else cout << D[i].suit << D[i].value << " ";
  }
  bool isStable=true;
  for(int i=0;i<n;i++){
    if(C[i].suit != D[i].suit){
      isStable=false;
      break;
    }
  }
  if(isStable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
}