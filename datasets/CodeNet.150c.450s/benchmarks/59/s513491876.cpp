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
    int n;

    cin >> n;
    vector<int> A(n);

    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    for(int i = 0; i < n; i++) {
        int v = A[i];
        int j = i-1;
        for(; j >= 0 && A[j] > v; j--)
            A[j+1] = A[j];
        A[j+1] = v;
        printVector(A);
    }

    return 0;
}
