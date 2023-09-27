#include <iostream>
#include<stdio.h>
#define MAXSIZE 101
#define PI 3.141592653589
using namespace std;
int main(){

  int n,m,l;
  std::cin >> n>>m>>l;
  int a[MAXSIZE][MAXSIZE]={0};
  int b[MAXSIZE][MAXSIZE]={0};
  long long int c[MAXSIZE][MAXSIZE]={0};

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      std::cin >> a[i][j];
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      std::cin >> b[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      for(int k=0;k<m;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }

  for(int i=0;i<n;i++){
    for(int k=0;k<l-1;k++){
      std::cout << c[i][k] << " ";
    }
    std::cout << c[i][l-1] << '\n';

  }


}