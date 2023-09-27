#include <iostream>
#include <cmath>
using namespace std;

int N;
int a[1000];
int j = 0;

int main(){
  cin >> N;
  int M = N;
  double n = sqrt(N);
  for(int i = 2; i <= n; i++){
    while (N % i == 0){
	  N = N / i;
	  a[j] = i;
	  j++;
	  }
    }
 std::cout << M << ":" << std::flush;
 if (j > 0){
 for (int l = 0; l <= j - 2; l++){
  std::cout << " " << a[l] << std::flush;
   }
  if (N == 1){
  cout << " " << a[j-1] << endl;
  }
  else{
  cout << " " << a[j-1] << " " << N << endl;
  }
  }
  else {
    cout << " " << M << endl;
  }
 }