#include<iostream>

using namespace std;

int a[1000];
int main() {
    while(1) {
        int n;
        cin >> n;

        if (n == 0) break;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int mindelta = 2000000;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(a[i] - a[j]) < mindelta) mindelta = abs(a[i] - a[j]);
            }
        }
        cout << mindelta << endl;
    }
}