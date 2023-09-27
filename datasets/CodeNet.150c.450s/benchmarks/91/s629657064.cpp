#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <iterator>

#include <cmath>

int main(void){
	using namespace std;

	map<int,int> input_dic;
	list<int> input;
	int k;

	while(cin >> k){
		input.push_back(k);
		input_dic[k] = 0;
	}

	int k_max = ( input_dic.rbegin() )->first;
	vector<bool> sieve(k_max, false);

	int sq_k_max = sqrt(k_max);
	for (int x=1; x<=sq_k_max; ++x) {
		for (int y=1; y<=sq_k_max; ++y) {
			int n = 4*x*x + y*y;
			if ( n<=k_max && (n%12==1 || n%12==5) ){
				sieve[n] = !sieve[n];
			}
			n = 3*x*x + y*y;
			if ( n<=k_max && n%12==7 ){
				sieve[n] = !sieve[n];
			}
			n = 3*x*x - y*y;
			if ( x>y && n<=k_max && n%12==11 ){
				sieve[n] = !sieve[n];
			}
		}
	}
	for (int n=5; n<=sq_k_max; ++n){
		if (sieve[n]){
			for (int k=n*n; k<=k_max; k+=n*n){
				sieve[k] = false;
			}
		}
	}
	sieve[2] = sieve[3] = true;

	int primeCount = 0;
	auto sieveItr = sieve.begin();
	for( auto itr=input_dic.begin(); itr!=input_dic.end(); itr++){
		for( ; distance(sieve.begin(),sieveItr) <= itr->first; sieveItr++){
			if( *sieveItr ){
				primeCount++;
			}
		}
		itr->second = primeCount;
	}

	for(auto itr=input.begin(); itr!=input.end(); itr++){
		cout << input_dic[*itr] << endl;
	}

}