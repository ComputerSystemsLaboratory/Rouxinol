#include<iostream>
using namespace std;
#include<string>

class card
{
public:
    char c, suit;
    int value;
    card();
    void input();
};

card::card(){}

void card::input(){
    cin >> suit >> c;
    value = c - '0';
}

void show(card* a, int n)
{
    for(int i = 0; i < n - 1; i++) cout << a[i].suit << a[i].value << " ";
    cout << a[n - 1].suit << a[n - 1].value << endl;
}

void BubbleSort(card* a, int n)
{
    int i;
    card z;
    bool inv = true;

    while(inv){
        inv = false;
        for(i = n - 1; i > 0; i--){
            if(a[i].value < a[i - 1].value){
                z = a[i];
                a[i] = a[i - 1];
                a[i - 1] = z;
                inv = true;
            }
        }
    };
    show(a, n);
    cout << "Stable" << endl;
}

void SelectionSort(card* a, int n)
{
    int i, j, minj;
    card z;

    for(i = 0; i < n; i++){
        minj = i;
        for(j = i; j < n; j++){
            if(a[minj].value > a[j].value) minj = j;
        }
        if(i < minj){
            z = a[minj];
            a[minj] = a[i];
            a[i] = z;
        }
    }
    show(a, n);
}

bool IsStable(card* a, card* b, int n)
{
    for(int i = 0; i < n; i++){
        if(a[i].suit != b[i].suit) return false;
    }
    return true;
}

int main()
{
    card A[36], B[36];
    int i, N;
    cin >> N;
    for(i = 0; i < N; i++){
        A[i].input();
        B[i] = A[i];
    }

    BubbleSort(A, N);
    SelectionSort(B, N);
    if(IsStable(A, B, N)){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }

    return 0;
}