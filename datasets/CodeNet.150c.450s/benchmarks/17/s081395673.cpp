#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int x;
    for (int i=0; i<5; i++) {
        cin >> x;
        numbers[i] = x;
    }
    for (int i=0; i<5; i++){
        for (int j=i; j<5; j++){
            if (numbers[j] > numbers[i]){
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
        cout << numbers[i];
        if (i < 4) {
            cout << ' ';
        }
    }
    cout << endl;
    return 0;
}