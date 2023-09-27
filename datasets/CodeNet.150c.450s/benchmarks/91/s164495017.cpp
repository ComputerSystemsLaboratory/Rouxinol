#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <iostream>
#include <string.h>
#include <map>
#include <set>
#include <functional>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    int n = 1000000;
	vector<bool> is_prime(n, true);
    vector<int> count(n);
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<n; i++){
        if(is_prime[i]){
            for(int j=i; j<n; j+=i)
                is_prime[j] = false;
            count[i]++;
        }
        count[i] += count[i-1];
    }
    
    int a;
    while(cin>>a){
        cout << count[a] << endl;
    }
    
	return 0;
}