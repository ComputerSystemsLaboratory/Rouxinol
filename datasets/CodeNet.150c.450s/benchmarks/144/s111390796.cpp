#include <iostream>

int main(int argc, char const *argv[]) {
  int n,m,l;
  std::cin >> n >> m >> l;
  long int a[n][m],b[m][l],c[n][l];
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      c[i][j] = 0;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int x=0;
      std::cin >> x;
      a[i][j] = x;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      int x=0;
      std::cin >> x;
      b[i][j] = x;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      for(int k=0;k<m;k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      std::cout << c[i][j];
      if(j!=(l-1))std::cout << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}