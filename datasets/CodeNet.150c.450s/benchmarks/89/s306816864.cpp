#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
    const int N = 1000001;
    vector<bool> prime(N, true);
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i < N; i++) {
        if(prime[i]) {
            for(int j = i + i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
    for(;;) {
        int a, d, n;
        cin >> a >> d >> n;
        if(a == 0) break;
        for(;;) {
            while(!prime[a]) {
                a += d;
            }
            n--;
            if(n == 0) break;
            a += d;
        }
        cout << a << endl;
    }
    return 0;
}
