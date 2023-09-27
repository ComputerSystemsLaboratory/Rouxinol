#include<iostream>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    int* score = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < n-k; i++) {
        if (score[i]<score[k+i]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    delete[] score;
    return 0;
}