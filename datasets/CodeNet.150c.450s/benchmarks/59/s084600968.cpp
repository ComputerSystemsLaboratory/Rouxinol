#include <iostream>
  
using namespace std;
  
int a[100];
int N;
  
void print() {
    cout << a[0];
    for (int i = 1; i < N; i++) {
        cout << " " << a[i];
    }
    cout << endl;
}
  
void insertionSort() {
    print();
    for (int i = 1; i < N; i++) {
        int key = a[i];
        int j = i-1;
        for (; j>=0; j--) {
            if(a[j] > key)
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = key;
        print();
    }
}
  
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    insertionSort();
    return 0;
}