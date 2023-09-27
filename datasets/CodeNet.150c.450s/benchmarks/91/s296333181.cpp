#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<ll> is_prime(999999+1,true);

void init_prime() {
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=999999; i++) {
	if(is_prime[i]) {
	    for(int j=i*2; j<=999999; j+=i)
		is_prime[j] = false;
	}
    }
}

int table[1000000] = {0};

int main() {

    init_prime();

    for(int i=1; i<1000000; i++) {
	if(is_prime[i]) 
	    table[i] = table[i-1]+1;
	else
	    table[i] = table[i-1];

    }
    
    
    int a;
    
    while(cin >> a) {
	cout << table[a] << endl;
	
    }


    return 0;
}