#include<iostream>
using namespace std;

struct Card {char suit, value; };

void BubbleSort(struct Card C[], int N){
    int i, j;
    for (i=0;i<N;i++){
        for (j=N-1; j>=i; j--){
            if (C[j].value < C[j-1].value) swap(C[j], C[j-1]);
        }
    }
}

void SelectionSort(struct Card A[], int N){
    int i, j, minj;
    for (i=0; i<N; i++){
        minj = i;
        for(j=i; j<N; j++){
            if(A[j].value < A[minj].value) minj = j;
        }
        if(minj!=i){
            swap(A[i], A[minj]);
        }
    }
}

void print(struct Card C[], int N){
    for (int i=0; i<N; i++){
        if (i>0) cout << " ";
        cout << C[i].suit << C[i].value;
    }
    cout << endl;
}

int main(void){
    Card C1[36], C2[36];
    int i, N, ch=1;
    cin >> N;
    for(i=0; i<N; i++){
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
    }

    BubbleSort(C1, N);
    SelectionSort(C2, N);

    for(i=0; i<N; i++){
        if(C1[i].suit != C2[i].suit){
            ch=0;
            break;
        }
    }
    print(C1, N);
    cout << "Stable" << endl;
    print(C2, N);
    if(ch) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    return 0;
}