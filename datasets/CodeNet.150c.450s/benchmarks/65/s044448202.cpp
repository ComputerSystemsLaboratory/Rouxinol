#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct trump {
  int value;
  char suit;
};

void print_trump(vector<trump> C,int N,bool is_stable) {
  for(int i=0;i<N;i++) {
    cout << C[i].suit << C[i].value << (i+1==N ? "" : " ");
  }
  cout << endl;
  if(is_stable) {
    cout << "Stable" << endl;
  }
  else {
    cout << "Not stable" << endl;
  }
}

vector<trump> bubble_sort(vector<trump> C,int N) {
  bool stable = true;
  int flag = 1;
  while(flag) {
    flag = 0;
    for(int j=N-1;j>0;j--) {
      if(C[j-1].value > C[j].value) {
        swap(C[j-1],C[j]);
        flag = 1;
      }
    }
  }
  return C;
}

vector<trump> selection_sort(vector<trump> C,int N) {
  bool stable = true;
  for(int i=0;i<N;i++) {
    int minj = i;
    for(int j=i;j<N;j++) {
      if(C[j].value < C[minj].value) {
        minj = j;
      }
    }
    if(minj != i) {
      swap(C[minj],C[i]);
    }
  }
  return C;
}

int main(void) {
  int N;
  vector<trump> C;

  /* input */
  cin >> N;
  for(int i=0;i<N;i++) {
    trump _t;
    cin >> _t.suit >> _t.value;
    C.push_back(_t);
  }

  vector<trump> B = bubble_sort(C,N);
  vector<trump> S = selection_sort(C,N);
  // bubble is stable sort
  print_trump(B,N,true);

  bool stable = true;
  for(int i=0;i<N;i++) {
    if(B[i].suit != S[i].suit) {
      stable = false;
      break;
    }
  }
  print_trump(S,N,stable);
}