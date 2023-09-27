#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int S[n];
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    int T[q];
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    int sum = 0;
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (T[i] == S[j]) {
                sum++;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}