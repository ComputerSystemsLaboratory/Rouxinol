#include <iostream>

using namespace std;

static const int MAX = 100;

struct Card { char suit, value; };

void bubbleSort(struct Card A[], int N){
    bool flag = true;
    for (int i = 0; flag; i++){
        flag = false;
        for (int j = N - 1; j >= i + 1; j--){
            if (A[j].value < A[j - 1].value){
                Card tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
                flag = true;
            }
        }
    }
}

void selectionSort(struct Card A[], int N){
    for (int i = 0; i < N - 1; i++){
        int minj = i;
        for (int j = i + 1; j < N; j++){
            if (A[j].value < A[minj].value) minj = j;
        }
        if (minj != i){
            Card tmp = A[minj];
            A[minj] = A[i];
            A[i] = tmp;
        }
    }
}

void trace(struct Card A[], int N){
    for (int i = 0; i < N; i++){
        if (i) cout << ' ';
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N){
    for (int i = 0; i < N; i++){
        if (C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main(){
    int num;
    Card C1[MAX], C2[MAX];

    cin >> num;
    for (int i = 0; i < num; i++) cin >> C1[i].suit >> C1[i].value;
    for (int i = 0; i < num; i++) C2[i] = C1[i];

    bubbleSort(C1, num);
    selectionSort(C2, num);

    trace(C1, num);
    cout << "Stable" << endl;

    trace(C2, num);
    if (isStable(C1, C2, num)){
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}