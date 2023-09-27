#include<iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int col_sum[c + 1];
    for (int j = 0; j <= c; j++) {col_sum[j] = 0;}

    int total = 0;
    for (int i = 0; i < r; i++) {
        int row_sum = 0;
        for (int j = 0; j < c; j++) {
            int number;
            cin >> number;

            row_sum += number;
            col_sum[j] += number;
            total += number;
 
            cout << number << " ";
        }
        cout << row_sum << endl;
    }

    for (int j = 0; j < c; j++) {cout << col_sum[j] << " ";}
    cout << total << endl;

    return 0;
}