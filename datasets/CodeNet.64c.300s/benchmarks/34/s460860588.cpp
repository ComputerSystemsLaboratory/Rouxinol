#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int totalNumber;
    cin >> totalNumber;

    int* data = new int[totalNumber];
    for (int i = 0; i < totalNumber; i++) cin >> data[i];
    for (int i = 0; i < totalNumber; i++) {
        if (i) cout << ' ';
        cout << data[i];
    }
    cout << endl;

    int currentData;
    for (int i = 1; i < totalNumber; i++) {
        currentData = data[i];

        int j = i - 1;
        while (j >= 0 && data[j] > currentData) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = currentData;

        for (int i = 0; i < totalNumber; i++) {
            if (i) cout << ' ';
            cout << data[i];
        }
        cout << endl;
    }

    return 0;
}