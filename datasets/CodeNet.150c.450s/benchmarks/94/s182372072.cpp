#include <iostream>
using namespace std;
int arr[100];
int main() {
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= i + 1; --j) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                ++cnt;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout <<arr[i]<< ((i == n - 1) ? "\n" : " ");
    }
    cout<<cnt<<endl;
}
