#include <iostream>
#include <unordered_map>
using namespace std;

int is_prime_f(int n) {
    int i;
    if(n < 2)
        return -1;
    else if(n == 2)
        return 1;

    if(n % 2 == 0)
        return -1;

    for(i = 3; i <= n / i; i += 2)
        if(n % i == 0)
            return -1;
    return 1;
}

unordered_map<int, int> map;

bool is_prime_map(int n) {
    int is_prime = map[n];
    if (is_prime == 0) {
        is_prime = is_prime_f(n);
        map[n] = is_prime;
    }
    return is_prime == 1;
}

int prime_num_count(int max) {
    int count = 0;
    for (int i = 1; i <= max; ++i) {
        if (is_prime_map(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    while(getline(cin, str)) {
        cout << prime_num_count(stoi(str.c_str())) << endl;
    }
    return 0;
}