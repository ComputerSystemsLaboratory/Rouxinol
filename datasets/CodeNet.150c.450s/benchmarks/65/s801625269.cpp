#include<iostream>
using namespace std;

struct Card{
    char letter;
    int value;
};

int n;
Card A1[36],A2[36];

bool isStable(Card C1[],Card C2[],int n){
    for(int i=0; i<n; i++){
        if(C1[i].letter != C2[i].letter)
            return false;
    }
    return true;
}

void BubbleSort(Card C[], int n){
    int flag;
    flag = 1;
    while(flag){
        flag = 0;
        for(int j=n-1; j>=1; j--){
            if(C[j].value<C[j-1].value){
                swap(C[j],C[j-1]);
                flag = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(i) cout << ' ';
        cout << C[i].letter << C[i].value;
    }
    cout << endl;
}

void selectionSort(Card C[], int n){
    int minj;
    for(int i=0; i<n; i++){
        minj = i;
        for(int j=i; j<n; j++){
            if(C[j].value < C[minj].value){
                minj = j;
            }
        }
        if(i!=minj)
            swap(C[i],C[minj]);
    }
    for(int k=0; k<n; k++){
        if(k) cout << ' ';
        cout << C[k].letter << C[k].value;
    }
    cout << endl;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A1[i].letter >> A1[i].value;
        A2[i] = A1[i];
    }
    
    BubbleSort(A1,n);
    cout << "Stable" << endl;
    selectionSort(A2,n);
    if(isStable(A1,A2,n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    
    return 0;
}