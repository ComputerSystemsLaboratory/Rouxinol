#include <iostream>
#include <cmath>
using namespace std;
#define N 1000000

bool prime[N+1];

int main()
{
    for(int i = 0; i < N+1; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(N); i++) {
        if (prime[i]) {
            for (int j = 2; j * i <= N; j++) {
                prime[i*j] = false;
            }
        }
    }
    int a, d, n;
    while (true) {
        cin >> a >> d >> n;
        if (a == 0 && d == 0) {
            break;
        }
        int cnt = 0;
        int i = 0;
        while (true) {
            if (prime[a + d * i]) {
                cnt++;
            }
            if (cnt == n) {
                cout << a + d * i << endl;
                break;
            }
            i++;
        }
    }
    
    
    return 0;
}