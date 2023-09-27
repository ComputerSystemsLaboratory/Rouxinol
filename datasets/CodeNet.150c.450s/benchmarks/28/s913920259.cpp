#include <iostream>
#define MAX 100000
using namespace std;

long T[MAX];
int n, k;

int check(int p)
{
    int i = 0;
    long long sum;
    for (int j = 0; j < k; j++) {
        sum = 0;
        while (sum + T[i] <= p) {
            sum += T[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}


int main(int argc, char const *argv[])
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }
    long long left = 0;
    long long right = 10000 * 100000;
    long long mid; 
    while (right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << endl;

    return 0;
}


