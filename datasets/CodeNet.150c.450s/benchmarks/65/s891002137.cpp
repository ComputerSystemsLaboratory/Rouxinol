#include<iostream>
   
using namespace std;
   
struct Card {
   
    char mark;
    int value;
   
};
   
void bubbleSort (struct Card C[], int n) {
   
    int i, j;
    Card v;
   
    for (i = 0; i < n; i++) {
   
        for (j = n - 1; j >= i + 1; j--) {
   
            if (C[j].value < C[j - 1].value) {
   
                v = C[j];
                C[j] = C[j - 1];
                C[j - 1] = v;
   
            }
   
        }
   
    }
   
}
   
void selectionSort (struct Card C[], int n) {
   
    int i, j, minj;
    Card v;
   
    for (i = 0; i < n; i++) {
   
        minj = i;
   
        for (j = i; j < n; j++) {
   
            if (C[j].value < C[minj].value) {
   
                minj = j;
   
            }
   
        }
   
        v = C[i];
        C[i] = C[minj];
        C[minj] = v;
   
    }
   
}
   
void print (struct Card C[], int n) {
   
    int i;
   
    for (i = 0; i < n; i++) {
   
        if (i > 0) {
   
            cout << " ";
   
        }
   
        cout << C[i].mark << C[i].value;
   
    }
   
    cout << endl;
   
}
   
bool isStable (struct Card C1[], struct Card C2[], int n) {
   
    int i;
   
    for (i = 0; i < n; i++) {
   
        if (C1[i].mark != C2[i].mark) {
   
            return false;
   
        }
   
    }
   
    return true;
   
}
   
int main () {
   
    Card C1[100], C2[100];
    int i, n;
   
    cin >> n;
   
    for (i = 0; i < n; i++) {
   
        cin >> C1[i].mark >> C1[i].value;
   
    }
 
    for (i = 0; i < n; i++) {
 
        C2[i] = C1[i];
 
    }
   
    bubbleSort (C1, n);
    selectionSort (C2, n);
   
    print (C1, n);
    cout << "Stable" << endl;
   
    print (C2, n);
    if (isStable (C1, C2, n)) {
   
        cout << "Stable" << endl;
   
    } else {
   
        cout << "Not stable" << endl;
   
    }
   
    return 0;
   
}