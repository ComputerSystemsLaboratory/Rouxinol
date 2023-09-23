#include <iostream>
#include<stdio.h>
#define MAXSIZE 100
#define PI 3.141592653589
using namespace std;
int main(){
  int n,m;
  std::cin >> n>>m;
  int a[MAXSIZE][MAXSIZE]={0};
  int b[MAXSIZE]={0};

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      std::cin >>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    std::cin >> b[i];
  }

  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
      sum+=b[j]*a[i][j];
    }
    std::cout << sum << '\n';
  }
}