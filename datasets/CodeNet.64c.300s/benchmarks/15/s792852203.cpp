#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  const int N_max = 100;
  int N;
  int a[N_max];
  cin >> N;
  for(int i = 0; i<N ; ++i){
    cin >> a[i];
  }

  
  //for
  int num_swaps = 0;

  for(int i = 0; i<N; ++i){
    int* min_ptr = min_element(a+i, a+N);
    if(min_ptr != a+i){
      swap(a[i], *min_ptr);
      ++num_swaps;
    }
  }
  
  //output
  for(int i = 0; i<N ; ++i){
    cout << ( i==0 ? "" : " ") << a[i];
  }
  cout << endl;
  cout << num_swaps <<endl;
  return 0;

  return 0;
}