#include    <iostream>
 
using namespace std;
 
bool F[1000003] = { false };
int DP[80000] = { 0 };
void prepa_Prime();
int count_Prime(int);
 
int main() {
    int n;

    prepa_Prime();
    while (cin >> n) {
        cout << count_Prime(n) << endl;;
    }
    return 0;
}
 
void prepa_Prime() {
    int i, c = 2;

    F[0] = F[1] = true;
    DP[0] = 1;

    DP[1] = 2;
    for (i = 4; i <= 1000003; i += 2) { F[i] = true; }
    
    for (i = 3; i <= 1000003; i += 2) {
        if (F[i] == false) {
            DP[c++] = i;
            for (int j = i * 2; j <= 1000003; j += i) {
                F[j] = true;
            }
        }
    }
}

int count_Prime(int n) {
    int i = 0;
    for (i; DP[i + 1] <= n; i++) {}
    return i;
}
