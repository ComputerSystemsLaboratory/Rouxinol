#include<bits/stdc++.h>
using namespace std;

const int N = 1000000;
int data[1000000];
int n;

void Eratosthenes(){
  for(int i=0; i<N; i++){
    data[i] = 1;
  }
  for(int i=2; i<sqrt(N); i++){
    if(data[i]){
      for(int j=0; i*(j+2)<N; j++){
	data[i *(j + 2)] = 0;
      }
    }
  }
}

int main()
{
  int cnt = 0;
  Eratosthenes();
  while( cin >> n ) {
    cnt = 0;
    for(int i=2; i<=n; i++) {
      if( data[i] ) cnt++;
    }

    cout << cnt << endl;
  }
}