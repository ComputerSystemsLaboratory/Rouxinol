#include <iostream>
using namespace std;

int isprime[1000000];

void hurui() {
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i < 1000000; i++) {
        isprime[i] = 1;
    }
    for (int i = 0; i < 1000000; i++) {
        if (isprime[i]) {
            for(int j = i * 2; j < 1000000; j+=i) {
                isprime[j] = 0;
            }
        }
    }
}

int main() {
    hurui();

    int N;
    while(cin >> N) {
        int count = 0;
        for (int i = 0; i <= N; i++) {
            if (isprime[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}