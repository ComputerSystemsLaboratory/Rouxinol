#include <iostream>
using namespace std;
int N;
int main() {
    cin >> N;
    cout << N / 3600 << ':' << N % 3600 / 60 << ':' << N % 60 << endl;
    return 0;
}
