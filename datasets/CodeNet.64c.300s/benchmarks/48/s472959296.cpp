#include <iostream>

using namespace std;
 
#define MAX 1000000
 
int main()
{
    int prime[MAX];
    fill(prime, prime + MAX, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i < MAX; i++) {
        if (prime[i]) {
            for (int j = 2*i; j < MAX; j += i) {
                prime[j] = 0;
            }
        }
    }
    
    for (int i = 1; i < MAX; i++) {
	prime[i] = prime[i] + prime[i-1];
    }
    
    int N;
    while (cin >> N) {
	cout << prime[N] << endl;
    }
    return 0;
}