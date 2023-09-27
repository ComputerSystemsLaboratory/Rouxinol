#include <iostream>

using namespace std;

int main() {
    // input 1
    int r, c;
    cin >> r >> c;
    
    // input 2
    int arr[r*c];
    for(int i=0; i<r; i++) {
        for(int ii=0; ii<c; ii++) {
            cin >> arr[c*i + ii];
        }
    }

    // output
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int ii=0; ii<c; ii++){
            cout << arr[c*i + ii] << " ";
            sum += arr[c*i + ii];
        }
        cout << sum << endl;
    }
    int sum_all = 0;
    for(int j=0; j<c; j++) {
        int sum = 0;
        for(int jj=0; jj<r; jj++) {
            sum += arr[c*jj + j];
        }
        cout << sum << " ";
        sum_all += sum;
    }
    cout << sum_all << endl;
}
