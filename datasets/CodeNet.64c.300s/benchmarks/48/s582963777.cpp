#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iomanip>

#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue

using namespace std;
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
const int inf = 1e9;
const ll linf = 1LL << 50;

int n;
bool is_prime[1000000];
int prime[1000000];

int main(int argc, char const* argv[])
{
	fill(is_prime, is_prime+1000000, true);
	is_prime[0] = false;
	is_prime[1] = false;
	int res = 0;
	for(int i = 2; i < 1000000; i++){
			if(is_prime[i]){
					res++;
					for(int j = 2; j * i < 1000000; j++){
							is_prime[j * i] = false;
					}
			}
			prime[i] = res;
	}
	while(cin >> n){
			cout << prime[n] << endl;
	}
	return 0;
}

