#include <iostream>
using namespace std;

typedef struct{
    char suit;
    char num;
} Card;

void printCard(Card A[], int N){
    for(int i = 0; i < N; ++i){
        cout << A[i].suit << A[i].num;
        if(i == N - 1){
            cout << "\n";
        }
        else{
            cout << " ";
        }
    }
}

void bubbleSort(Card A[], int N){
    for(int i = 0; i < N; ++i){
        for(int j = N - 1; j >= i; --j){
            if(A[j].num < A[j - 1].num){
                std::swap(A[j], A[j - 1]);
            }
        }
    }
    printCard(A, N);
}

void selectionSort(Card A[], int N){
    for(int i = 0; i < N; ++i){
        int minIdx = i;
        for(int j = i; j < N; ++j){
            if(A[j].num < A[minIdx].num){
                minIdx = j;
            }
        }
        std::swap(A[i], A[minIdx]);
    }
    printCard(A, N);
}

bool isStable(Card A1[], Card A2[], int N){
    for(int i = 0; i < N; ++i){
        if(A1[i].suit != A2[i].suit){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    Card Ab[36], As[36];

    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> Ab[i].suit >> Ab[i].num;
        As[i] = Ab[i];
    }

    bubbleSort(Ab, N);
    cout << "Stable" << "\n";
    selectionSort(As, N);
    if(isStable(Ab, As, N)){
        cout << "Stable";
    }
    else{
        cout << "Not stable";
    }
    cout << "\n";

    return 0;
}
