#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
        int N;
        cin >> N;
        int primes = N;
        for (int i = 0; i < N; i++) {
                int n;
                cin >> n;
                for (int i = 2; i * i <= n; i++) {
                        if (n % i == 0) { 
                                primes--;
                                break;
                        }
                }
        }
        cout << primes << endl;
        return 0;
}