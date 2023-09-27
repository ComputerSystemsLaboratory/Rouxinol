#include <iostream>
#include <cmath>

#define N 1000000
using namespace std;

int arr[N];

//??¨????????????????????????
void Eratosthenes(){
  for(int i = 0; i < N; i++){
    arr[i] = 1;
  }
  for(int i = 2; i < sqrt(N); i++){
    if(arr[i]){
      for(int j = 0; i * (j + 2) < N; j++){
        arr[i *(j + 2)] = 0;
      }
    }
  }
}

  
int main(void){
  Eratosthenes();
  while(1){
    int a,d,n;
    cin >> a >> d>> n;
    //cout << a << d << n;
    if(a==0 && d==0 && n==0)break;
    
    int x,i=0,j=0;
    while(1){
      if(j==n)break;
      x=a+i*d;
      if (x>1 && arr[x])j++;
      i++;
    }
    cout << x << endl;
  }
  return 0;
}