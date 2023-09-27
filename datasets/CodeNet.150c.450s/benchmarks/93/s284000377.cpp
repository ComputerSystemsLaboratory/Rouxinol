//
// Created by Jonny on 2018/7/19.
//
#include <iostream>
using namespace std;
#define Max 2000000000;
struct Card {
    char type;
    int key;
};
Card cardA[100005],cardB[100005];
Card c1[50002],c2[50002];

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) {
        c1[i] = A[left + i];
    }
    for (int j = 0; j < n2; j++) {
        c2[j] = A[mid + j];
    }
    c1[n1].key = c2[n2].key = Max;
    int l = 0,r = 0;
    for (int k = left; k < right; k++) {
        if (c1[l].key <= c2[r].key) {
            A[k] = c1[l];
            l++;
        } else {
            A[k] = c2[r];
            r++;
        }
    }
}

void mergeSort(Card A[],int left,int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}

int partition(Card A[],int p,int r) {
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].key <= A[r].key) {
            i++;
            Card x = A[j];
            A[j] = A[i];
            A[i] = x;
        }
    }
    Card x = A[r];
    A[r] = A[i + 1];
    A[i+1] = x;
    return (i+1);
}

void quickSort(Card A[],int p,int r) {
    if (p < r) {
        int q = partition(A,p,r);
        quickSort(A,p,q - 1);
        quickSort(A,q + 1,r);
    }
}
int main() {
    int n,stable = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cardA[i].type;
        cin >> cardA[i].key;
        cardB[i].key = cardA[i].key;
        cardB[i].type = cardA[i].type;
    }
    mergeSort(cardA,0,n);
    quickSort(cardB,0,n-1);

    for (int j = 0; j < n; j++) {
        if (cardA[j].type != cardB[j].type) {
            stable = 0;
            break;
        }
    }
    if (stable == 1) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    for (int k = 0; k < n; k++) {
        cout << cardB[k].type << " " << cardB[k].key << endl;
    }

    return 0;
}

