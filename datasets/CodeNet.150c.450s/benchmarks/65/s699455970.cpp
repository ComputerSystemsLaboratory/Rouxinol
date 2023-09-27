#include<iostream>
using namespace std;

struct Card{char suit, value;};

void bubbleSort(struct Card c[],int n){
    for (int i = 0; i < n; i++) {
        for (int k = n - 1; i < k; k--) {
            if(c[k].value < c[k-1].value){
                Card t = c[k];c[k] = c[k-1];c[k-1] = t;
            }
        }
    }
}

void selectionSort(struct Card c[],int n){
    for (int i = 0; i < n; i++) {
        int minj = i;
        for (int k = i+1; k < n; k++) {
            if (c[k].value < c[minj].value) {
                minj = k;
            }
        }
        struct Card t = c[i];c[i] = c[minj];c[minj] = t;
    }
}

void print(struct Card c[], int n){
    for (int i = 0; i < n; i++) {
        if(i)cout<<" ";
        cout<<c[i].suit<<c[i].value;
    }
    cout<<endl;
}

bool isStable(struct Card c1[], struct Card c2[], int n){
    for (int i = 0; i < n; i++) {
        if (c1[i].suit != c2[i].suit) {
            return false;
        }
    }
    return true;
}


int main(){
    Card c1[100],c2[100];
    int n;
    
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> c1[i].suit>>c1[i].value;
    }
    
    for (int i = 0; i < n; i++) {
        c2[i] = c1[i];
    }
    
    bubbleSort(c1, n);
    selectionSort(c2, n);
    
    print(c1, n);
    cout << "Stable" << endl;
    print(c2, n);
    
    if(isStable(c1, c2, n)){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
    
    return 0;
}