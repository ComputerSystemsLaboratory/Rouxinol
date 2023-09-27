

#include <iostream>
#include "algorithm"
using namespace std;



int main() {
    int n;
    cin >> n;
    int R[n];
    int i = 0;
    int c = 0;
    int temp, min;
    
    
    for (int i = 0; i < n; i++){
        cin >> R[i];
    }
    
    for (int i = 0; i<n; i++){
        min = i;
        for (int j = i; j<n; j++){
            if (R[j] < R[min]){
                min = j;
            }
        }
        if (R[i] != R[min]){
            temp = R[i];
            R[i] = R[min];
            R[min] = temp;
            c++;
        }
    }

    
    
    for(int j=0; j<n; j++){
        cout << R[j];
        if (j<n-1){
            cout << " ";
        }
    }
    cout << endl << c << endl;
}