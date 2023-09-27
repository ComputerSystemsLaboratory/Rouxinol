#include <iostream>
using namespace std;

struct Card {char suit; int value;};

void print(struct Card A[], int n){
    for(int i=0;i<n;i++){
        if(i) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

void bubble_sort(struct Card A[], int n){
    Card t;
    bool flag = 1;
    for(int i=0;flag;i++){
        flag = 0;
        for(int j=n-1;j>i;j--){
            if(A[j].value < A[j-1].value){
                flag = 1;
                t = A[j]; A[j] = A[j-1]; A[j-1] = t;
            }
        }
    }
}

/*
void insertion_sort(struct Card A[], int n){
    int j;
    Card v;
    for(int i=1;i<n;i++){
        v = A[i];
        j = i - 1;
        while(j >= 0 && v.value < A[j].value){
            A[j+1] = A[j];
            j -- ;
        }
        A[j+1] = v;
    }
}
*/

void selection_sort(struct Card A[], int n){
    int mini;
    for(int i=0;i<n;i++){
        mini = i;
        for(int j=i+1;j<n;j++){
            if(A[mini].value > A[j].value){
                mini = j;
            }
        }
        if(i != mini){
            swap(A[i], A[mini]);
        }
    }
}


bool isStable(struct Card A1[], struct Card A2[], int n){
    for(int i=0;i<n;i++){
        if(A1[i].suit != A2[i].suit){
            return false;
        }
    }
    return true;
}

int main(){
    Card A1[36], A2[36];
    int n=0;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A1[i].suit >> A1[i].value;
        A2[i] = A1[i];
    }

    bubble_sort(A1, n);
    print(A1, n);
    cout << "Stable" << endl;

    selection_sort(A2, n);
    print(A2, n);
    if(isStable(A1, A2, n)){
        cout << "Stable" << endl;
    }
    else{
        cout << "Not stable" << endl;
    }
    return 0;
}

