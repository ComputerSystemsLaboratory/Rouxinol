#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

typedef struct card{
    char state;
    int num;
}Card;

int my_partition(Card A[], int p, int r){
    int x = A[r].num;
    int i  = p-1;
    for(int j = p; j < r; j++){
        if(A[j].num <= x){
            i++;
            Card tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    Card tmp = A[i+1];
    A[i+1] = A[r];
    A[r] = tmp;

    return i+1;
}

void quickSort(Card A[], int p, int r){
    if(p < r){
        int q = my_partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}


void merge(Card A[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<Card> L(n1+1), R(n2+1);   //新しく配列分の領域が必要
                                    //他のソートアルゴリズムに比べメモリが必要になる
                                    //番兵分に一つ多くの配列が必要
    rep(i, n1)
        L[i] = A[left + i];
    rep(i, n2)
        R[i] = A[mid + i];
    
    L[n1].num = INT_MAX;    //番兵
    R[n2].num = INT_MAX;    //番兵
    int i = 0;
    int j = 0;
    for(int k = left; k < right; k++){
        if(L[i].num <= R[j].num){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card A[], int left, int right){
    if(left+1 < right){             //1つになるまで分割
        int mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;
    Card quick[100000];
    Card merge[100000];
    rep(i, n){
        cin >> quick[i].state >> quick[i].num;
        merge[i] = quick[i];
    }

    quickSort(quick, 0, n-1);
    mergeSort(merge, 0, n);

    bool check = true;
    rep(i, n){
        if(merge[i].state != quick[i].state){
            check = false;
            break;
        }
    }
    if(check){
        cout << "Stable" << endl;
    }
    else{
        cout << "Not stable" << endl;
    }
    rep(i, n){
        cout << quick[i].state << " " << quick[i].num << endl;
    }

    return 0;
}
