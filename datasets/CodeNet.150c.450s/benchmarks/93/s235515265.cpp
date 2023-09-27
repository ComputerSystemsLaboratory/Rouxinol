#include<bits/stdc++.h>
using namespace std;
#define INF 1000000001

typedef struct p{
    char cap;
    int num;
}P;

void merge(P a[], int left, int mid, int right){
    P l[mid-left+1], r[right-mid+1];
    l[mid-left].num = INF;
    r[right-mid].num = INF;
    for(int i = 0; i < mid - left; i++) l[i] = a[left + i];
    for(int i = 0; i < right - mid; i++) r[i] = a[mid + i];
    int j = 0, k = 0;
    for(int i = left; i < right; i++){
        l[j].num <= r[k].num ? a[i] = l[j++] : a[i] = r[k++];
    }
}

void mergeSort(P a[], int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int partition(P a[], int p, int r){
    int x = a[r].num;
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(a[j].num <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i + 1;
}

void quicksort(P a[], int p, int r){
    if(p < r){
        int q = partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a, q+1, r);
    }
}

int main(){
    bool flag = true;
    int n; cin >> n;
    P card1[n], card2[n];
    for(int i = 0; i < n; i++)
        cin >> card1[i].cap >> card1[i].num;
    
    memcpy(card2, card1, sizeof(card1));

    quicksort(card1, 0, n-1);
    mergeSort(card2, 0, n);

    for(int i = 0; i < n; i++){
        if(card1[i].cap != card2[i].cap ||
            card1[i].num != card2[i].num){
            flag = false;
            break;
        }
    }

    flag ? cout << "Stable" << endl: cout << "Not stable" << endl;
    for(int i = 0; i < n; i++)
        cout << card1[i].cap << " " << card1[i].num << endl;

    return 0;
}
