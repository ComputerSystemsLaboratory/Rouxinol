#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

const int MAX = 1000000;
int N;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    vector<bool> is_prime(MAX,true);
    vector<int> prime(MAX,0);
    is_prime[0] = is_prime[1] = false;
    prime[0] = prime[1] = 0;
    int p = 0;
    for(int i = 2; i < MAX; ++i){
        if(is_prime[i]){
            for(int j = i*2; j < MAX; j += i) is_prime[j] = false;
        }
    }

    for(int i = 1; i < MAX; ++i){
        prime[i] = prime[i-1] + is_prime[i];
    }

    while(cin >> N){
        cout << prime[N] << '\n';
    }
    return 0;
}
