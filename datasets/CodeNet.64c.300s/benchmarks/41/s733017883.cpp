#include<iostream>
using namespace std;

int A[2000001], n;

void maxheapify(int i) {
    int left, right, largest;
    
    left = 2 * i;
    right = 2 * i + 1;
    
    if (left <= n && A[left] > A[i]) largest = left;
    else largest = i;
    
    if (right <= n && A[right] > A[largest]) largest = right;
    
    if (largest != i) {
        swap(A[i], A[largest]);
        maxheapify(largest);
    }
}

int main() {
    cin >> n;
    for (int j = 1; j <= n; j++) cin >> A[j];
    
    for (int i = n / 2; i >= 1; i--) maxheapify(i);
    
    for (int i = 1; i <= n; i++) {cout << " " << A[i];}
    
    cout << endl;
    
    return 0;
}
