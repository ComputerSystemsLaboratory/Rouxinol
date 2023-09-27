#include <iostream>
#include <string>
using namespace std;

int size = 0;
int S[2000000] = {0};

int parent(int i){
  if(i % 2 == 1)return (i - 1) / 2;
  else          return (i - 2) / 2;
}

void insert(int *S, int k){
  int i = size++;

  while(i > 0){
    int p = parent(i);
    if(S[p] >= k) break;
    else{
      S[i] = S[p];
      i = p;
    }
  }
  S[i] = k;
}

int extractMax(int *S){
  int ret = S[0];
  int x = S[--size];

  int i = 0;
  while(i * 2 + 1 < size){
    int l = i * 2 + 1, r = i * 2 + 2;
    if(r < size && S[r] > S[l]) l = r;
    if(S[l] <= x)break;
    S[i] = S[l];
    i = l;
  }
  S[i] = x;
  return ret;
}

int main(){
  string s;
  int k;
  while(1){
    cin >> s;
    if(s == "end"){
      break;
    }else if(s == "insert"){
      cin >> k;
      insert(S, k);
    }else {
      cout << extractMax(S) << endl;
    }
  }
}