#include <iostream>
#include <vector>
using namespace std;

struct Card{char suit, value;};

void Buble(Card A[], int N){
  for(int i=0;i<N;++i){
    for(int j=N-1;j>i;--j){
      if(A[j].value < A[j-1].value) swap(A[j], A[j-1]);
    }
  }
}

void Selection(Card A[], int N){
  for(int i=0;i<N;++i){
    int minj=i;
    for(int j=i;j<N;++j){
      if(A[j].value<A[minj].value) minj=j;
    }
    swap(A[i], A[minj]);
  }
}

void Print(Card A[], int N){
  for(int i=0;i<N;++i){
    if(i!=N-1) cout << A[i].suit << A[i].value << " ";
    else cout << A[i].suit << A[i].value;
  }
  cout << endl;
}

bool isStable(Card C1[], Card C2[], int N){
  for(int i=0;i<N;++i){
    if(C1[i].suit!=C2[i].suit) return false;
  }
  return true;
}

int main() {
    Card C1[36], C2[36]; int N; cin >> N;
    for(int i=0;i<N;++i){
      cin >> C1[i].suit >> C1[i].value;
      C2[i]=C1[i];
    }
    Buble(C1, N);
    Selection(C2, N);
    Print(C1, N);
    cout << "Stable" << endl;
    Print(C2, N);
    cout << (isStable(C1, C2, N)?"Stable":"Not stable") << endl;
    return 0;
}