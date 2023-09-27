#include <iostream>
using namespace std;

int main(){
  const int N_max = 100;
  int N;
  int a[N_max];
  cin >> N;
  for(int i = 0; i<N ; ++i){
    cin >> a[i];
  }
  
  //sort
  int num_swaps=0;
  for(int i=0; i<N-1; ++i){
    for(int j=N-2; j>=i; --j){
      //swap a[j] and a[j+1]
      if (a[j] > a[j+1]){
	int t = a[j];
	a[j] = a[j+1];
	a[j+1] = t;
	++num_swaps;
      }
    }
  }

  //output
  for(int i = 0; i<N ; ++i){
    cout << ( i==0 ? "" : " ") << a[i];
  }
  cout << endl;
  cout << num_swaps <<endl;
  return 0;
}