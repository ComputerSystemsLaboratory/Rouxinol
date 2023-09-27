#include <iostream>

#define MAX 100000

using namespace std;

int collisionSearch(int *array,int key,int num){

  int i;

  for(i = 0;i < num;i++){
    if(array[i] == key){
      return -1;
    }
  }

  return 0;
}

int main(){

  int i;
  int j;
  int k;
  int n;
  int q;
  int S[MAX];
  int T[MAX];
  int alr[MAX];
  int cnt = 0;
  int flag = 0;
  int temp;

  cin >> n;

  i = 0;
  // origin array
  while(i != n){
    cin >> temp;
    if(collisionSearch(S,temp,i) != 0){
      n--;
      continue;
    }
    S[i] = temp;
    i++;
  }

  cin >> q;

  i = 0;
  // cmp array
  while(i != q){
    cin >> temp;
    if(collisionSearch(T,temp,i) != 0){
      q--;
      continue;
    }
    T[i] = temp;
    i++;
  }

  // saerch
  for(i = 0;i < n;i++){
    for(j = 0;j < q;j++){
      if(S[i] == T[j]){
	cnt++;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}