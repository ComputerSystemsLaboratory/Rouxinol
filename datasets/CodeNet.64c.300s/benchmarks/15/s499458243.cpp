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
        int minj = i;
        for (int j = i; j < n; ++j) {
            if (arr[j] < arr[minj]) {
                minj = j;
            }
        }
        if (i != minj){
            swap(arr[i],arr[minj]);
            ++cnt;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout <<arr[i]<< ((i == n - 1) ? "\n" : " ");
    }
    cout<<cnt<<endl;
}
