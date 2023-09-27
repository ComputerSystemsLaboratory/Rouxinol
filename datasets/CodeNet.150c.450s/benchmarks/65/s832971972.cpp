#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(const string& a, const string& b)
{
  return (a[1] < b[1]);
}

int main()
{
  const string
    stable = "Stable",
    not_stable = "Not stable";
  const int N_max = 100;
  int N;
  string a[N_max], b[N_max];
  cin >> N;
  for(int i = 0; i<N ; ++i){
    cin >> a[i];
    b[i] = a[i];
  }

  //bubble sort
  for(int i = 0; i<N; ++i){
    for(int j = N-2; j >= 0; --j){
      if(compare(a[j+1], a[j])){
	swap(a[j], a[j+1]);
      }
    }
  }
  
  for(int i = 0; i<N ; ++i){ cout << ( i==0 ? "" : " ") << a[i]; }
  cout << endl;
  cout << stable << endl;
  
  //insertion sort
  bool execution_was_stable = true;
  for(int i = 0; i<N; ++i){
    string* min_ptr = min_element(b+i, b+N, compare);
    if(min_ptr != b+i){
      for(int j = i+1; b+j<min_ptr; ++j){
	if (!compare(b[j],b[i]) && !compare(b[i],b[j])){
	  execution_was_stable = false;
	}
      }
      swap(b[i], *min_ptr);
    }
  }
  
  for(int i = 0; i<N ; ++i){ cout << ( i==0 ? "" : " ") << b[i]; }
  cout << endl;
  cout << (execution_was_stable ? stable : not_stable)
       << endl;

  return 0;
}