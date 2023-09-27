#include<iostream>
using namespace std;

void insertionSort(int a[], int n); //don't forget int

int main(){
    int a[100];
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    insertionSort(a, n);
    return 0;
}

void insertionSort(int a[], int n){
    for ( int i = 0; i < n; i++ ){
        int key = a[i]; 
        int j = i - 1;
        while ( j >= 0 && a[j] > key ) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        
        for ( int k = 0; k < n; k++ ) { //i < nとかになってた
            cout << a[k];
            if (k != n - 1) cout << " ";
        }
        cout << endl;
            
    }
}
