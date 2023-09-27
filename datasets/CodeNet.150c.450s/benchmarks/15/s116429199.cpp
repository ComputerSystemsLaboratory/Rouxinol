#include <iostream>

#define MAX 10000
#define NOT_FOUND -1

using namespace std;

//int linearSearch(int[], int, int[]);
int linearSearch(int[], int, int);

int main(){
  int i,n,q,key;
  int sum = 0;
  int S[MAX+1],T[MAX+1];
  
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> S[i];
  }
  cin >> q;
  for(i = 0; i < q; i++){
    //cin >> key;
    cin >> T[i];
    key = T[i];
    if(linearSearch(S,n,key) >= 0){
    //linearSearch(S,n,key);
      sum++;
    }
  }
  cout << sum << endl;
  
  return 0;
}

int linearSearch(int S[], int n, int key){
  int i = 0;
  S[n] = key;
  while(S[i] != key){
    i++;
    if(i == n){
      return NOT_FOUND;
      //return 0;
    }
  }
  return i;
  
}