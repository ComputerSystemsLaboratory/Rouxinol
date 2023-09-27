#include <iostream>

int main(int argc, char const *argv[]) {
  int n=0,m=0;
  std::cin >> n >> m;

  int a[n][m];
  int b[m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int x=0;
      std::cin >> x;
      a[i][j] = x;
    }
  }
  for(int i=0;i<m;i++){
    int x=0;
    std::cin >> x;
    b[i] = x;
  }
  for(int i=0;i<n;i++){
    int result = 0;
    for(int j=0;j<m;j++){
      result += a[i][j] * b[j];
    }
    std::cout << result << std::endl;
  }
  return 0;
}