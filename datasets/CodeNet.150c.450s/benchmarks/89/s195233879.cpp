#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <climits>
using namespace std;

void makePrimeNumber(int N, vector<bool>& prime)
{
    prime.assign(N+1, true);
    prime [0] = prime[1] = false;
    for(int i=2; i*i<=N; i++){
        if(prime[i]){
            for(int j=i; i*j<=N; j++){
                prime[i*j] = false;
            }
        }
    }
}

int main()
{
    vector<bool> prime;
    makePrimeNumber(999999, prime);

	for(;;){
		int a, d, n;
		cin >> a >> d >> n;;
		if(a == 0 && d == 0 && n == 0)
			break;

        a -= d;
        while(n > 0){
            a += d;
            if(prime[a])
                -- n;
        }
        cout << a << endl;
	}

	return 0;
}