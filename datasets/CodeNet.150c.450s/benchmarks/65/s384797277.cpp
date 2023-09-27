#include <iostream>
#include <vector>
#include <string>

using namespace std;

void BubbleSort(int, int);
void SelectionSort(int, int);

struct Card{
    char pic, val;
};

void swap(Card* a, Card* b){
    Card tmp = *a;
    *a = *b;
    *b = tmp;
}

void printResult(Card* Seq, int n){
    for(int i=0; i<n; i++){
        if(i != n-1){
            cout << Seq[i].pic << Seq[i].val << " ";
        }else{
            cout << Seq[i].pic << Seq[i].val << endl;
        }
    }
}

void BubbleSort(Card* Seq, int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(Seq[j].val < Seq[j-1].val){
                swap(&Seq[j], &Seq[j-1]);
            }
        }
    }
}

void SelectionSort(Card* Seq, int n){
    int mini;
    for(int i=0; i<n; i++){
       mini = i;
       for(int j=i; j<n; j++){
           if(Seq[j].val < Seq[mini].val){
               mini = j;
           }
       }
       swap(&Seq[i], &Seq[mini]);
    }
}

bool checkstable(Card* c1, Card* c2, int n){
    for(int i=0; i<n; i++){
        if(c1[i].val == c2[i].val && c1[i].pic != c2[i].pic) return false;
    }
    return true;
}

int main(){

    int n; 
    cin >> n;

    auto c1 = new Card[n];
    auto c2 = new Card[n];
    for(int i=0; i<n; i++){
        cin >> c1[i].pic >> c1[i].val;
        c2[i] = c1[i];
    }

    BubbleSort(c1, n);
    printResult(c1, n);
    cout << "Stable" << endl;

    SelectionSort(c2, n);
    printResult(c2, n);
    if( checkstable(c1, c2, n)){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }

    return 0;
}