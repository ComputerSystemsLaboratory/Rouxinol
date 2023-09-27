#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
  const int N_max = 10000;

  int N;
  int candidates[N_max];
  std::vector<int> primes;

  cin >> N;
  for(int i =0; i<N; ++i){
    cin >> candidates[i];
  }
  int max_candidate = *std::max_element(candidates, candidates+N);
  int sqrt_max_candidate = static_cast<int>(sqrt(max_candidate));
  // cout << "max_candidate: " << max_candidate << endl;
  // cout << "sqrt_max_candidate: " << sqrt_max_candidate << endl;

  //list
  for(int cand = 2; cand <= sqrt_max_candidate; ++cand){
    bool is_a_prime = true;
    for(const int &i : primes){
      if (0 == cand%i){
	is_a_prime = false;
	break;
      }
    }
    if(is_a_prime){
      primes.push_back(cand);
    }
    // if (cand % 10000==0){
    //   cout << "checked: " << cand << endl;
    // }
  }

  // for(const int &i : primes){
  //   cout << i << endl;
  // }


  //count
  int num_of_primes = 0;
  for(int i = 0; i<N; ++i){
    if(candidates[i] <= sqrt_max_candidate && static_cast<bool>(std::binary_search(primes.begin(), primes.end(), candidates[i]))){
      ++num_of_primes;
    }
    else if(candidates[i] > sqrt_max_candidate){
      bool is_a_prime = true;
      for(const int &p : primes){
	if (0==candidates[i]%p){
	  is_a_prime = false;
	  break;
	}
      }
      if (is_a_prime) ++num_of_primes;
    }
  }
  cout << num_of_primes <<endl;
  
  return 0;
}