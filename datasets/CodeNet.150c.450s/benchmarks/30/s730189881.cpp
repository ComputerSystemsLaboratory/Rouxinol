#include    <iostream>
#include    <vector>

using namespace std;

void printVector(const vector<int> &A) {
    for(int i = 0; i < A.size(); i++) {
        cout << A[i];
        if(i+1 < A.size()) cout << ' ';
    }
    cout << endl;
}

int main() {
    int n, count = 0;
    auto swap = [](int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;
    };

    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < n; i++) {
        int minj = i;
        for(int j = i; j < n; j++)
            if(A[j] < A[minj])  minj = j;
        if(A[i] != A[minj]) {
            swap(A[i], A[minj]);
            count++;
        }
    }
    printVector(A);
    cout << count << endl;

    return 0;
}
