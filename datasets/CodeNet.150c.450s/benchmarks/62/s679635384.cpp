#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(begin(arr), end(arr));
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}

