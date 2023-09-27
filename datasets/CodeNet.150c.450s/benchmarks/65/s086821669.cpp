#include <iostream>
#include <algorithm>
using namespace std;

struct card{
    char suit;
    int value;
};

void bubbleSort(card C[], int n);
void selectionSort(card C[], int n);
bool isSame(card A[], card B[], int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    card A[36], B[36];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>A[i].suit>>A[i].value;
        B[i]=A[i];
    }
    bubbleSort(A, n);
    selectionSort(B, n);
    
    for(int i=0; i<n-1; i++) cout<<A[i].suit<<A[i].value<<' ';
    cout<<A[n-1].suit<<A[n-1].value<<'\n'<<"Stable\n";
    for(int i=0; i<n-1; i++) cout<<B[i].suit<<B[i].value<<' ';
    cout<<B[n-1].suit<<B[n-1].value<<'\n';
    if(isSame(A, B, n)) cout<<"Stable\n";
    else cout<<"Not stable\n";
    return 0;
}

void bubbleSort(card C[], int n)
{
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>i; j--) {
            if(C[j].value<C[j-1].value) swap(C[j], C[j-1]);
        }
    }
}

void selectionSort(card C[], int n)
{
    for(int i=0; i<n; i++) {
        int mini=i;
        for(int j=i+1; j<n; j++) {
            if(C[j].value<C[mini].value) mini=j;
        }
        if(mini!=i) swap(C[mini], C[i]);
    }
}

bool isSame(card A[], card B[], int n)
{
    for(int i=0; i<n; i++) {
        if(A[i].suit!=B[i].suit) return false;
    }
    return true;
}