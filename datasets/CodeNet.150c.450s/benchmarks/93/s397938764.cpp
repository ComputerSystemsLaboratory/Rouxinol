#include    <bits/stdc++.h>
using   namespace   std;

#define MAX_A   10000

struct  Card {
    char Suit;
    int Num;
    int Org;
};

int Partition(vector<Card> &A, int p, int r) {
    int x=A.at(r).Num;
    int i=p-1;
    for (int j=p; j<r; j++)
        if (A.at(j).Num<=x) {
            i++;
            swap(A.at(i), A.at(j));
        }
    swap(A.at(i+1), A.at(r));
    return (i+1);
};

void    Quicksort(vector<Card> &A, int p, int r) {
    if (p<r) {
        int q=Partition(A, p, r);
        Quicksort(A, p, q-1);
        Quicksort(A, q+1, r);
    }
    return;
}

int main() {
    int n;
    cin >>n;
    vector<Card> A(n);
    for (int i=0; i<n; i++) {
        cin >>A.at(i).Suit >>A.at(i).Num;
        A.at(i).Org=i;
    }
    Quicksort(A, 0, n-1);
    //
    bool Stable=true;
    for (int i=1; i<n; i++)
        if (A.at(i-1).Num==A.at(i).Num)
            if (A.at(i-1).Org>A.at(i).Org) {
                Stable=false;
                break;
            }
    if (Stable)
        cout <<"Stable" <<endl;
    else
        cout <<"Not stable" <<endl;
    for (int i=0; i<n; i++)
        cout <<A.at(i).Suit <<' ' <<A.at(i).Num <<endl;
    return 0;
}
