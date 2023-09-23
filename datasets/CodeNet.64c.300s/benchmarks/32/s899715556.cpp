#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {
    

    long long n;
    cin >> n;
    long long a;
    cin >> a;
    long long max_n, min_n, sum;
    max_n = a;
    min_n = a;
    sum = 0;
    sum += a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        sum += a;
        if (max_n < a) {
            max_n = a;
        }
        if (min_n > a) {
            min_n = a;
        }
    }
    cout << min_n << " " << max_n << " " << sum << endl;
}
