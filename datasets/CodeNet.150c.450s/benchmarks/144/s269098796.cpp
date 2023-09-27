#include<iostream>
using namespace std;


const int SIZE = 101;

int main(){
  int n,m,l;
  int a[SIZE][SIZE],b[SIZE][SIZE];
  long long c[SIZE][SIZE] = {};

  cin >> n >> m >> l;

  for(int i=0;i<n;++i){
    for(int k=0;k<m;++k){
      cin >> a[i][k];
    }
  }

  for(int i=0;i<m;++i){
    for(int k=0;k<l;++k){
      cin >> b[i][k];
    }
  }

  for(int i=0;i<n;++i){
    for(int k=0;k<l;++k){
      for(int e=0;e<m;++e){
	c[i][k] += a[i][e]*b[e][k];
      }
    }
  }

  for(int i=0;i<n;++i){
    for(int k=0;k<l;++k){
      cout << c[i][k];

      if(k!=l-1){
	cout << " ";
      }
    }
    cout <<endl;
  }

  return 0;
}

