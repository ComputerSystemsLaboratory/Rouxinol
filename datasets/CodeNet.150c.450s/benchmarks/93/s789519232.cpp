#include<iostream>
#include<climits>
using namespace std;

#define N 100000
#define check cout<<"-----"<<endl;

class Card {
public:
    char sign;
    int number;
};

void quickSort(Card *, int, int);
void marge(Card *, int, int, int);
void margeSort(Card *, int, int);

int main() {

    int n;
    cin>>n;
    Card a[N], b[N];
    for(int i = 0; i < n; i++) {
        cin>>a[i].sign>>a[i].number;
        b[i] = a[i];
    }

    quickSort(a, 0, n-1);
    margeSort(b, 0, n);

    int i;
    for(i = 0; i < n; i++) {
        if(a[i].sign != b[i].sign) break;
    }
    if(i == n) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;

    for(int i = 0; i < n; i++) cout<<a[i].sign<<' '<<a[i].number<<endl;
    
    return 0;
}

void quickSort(Card *a, int p, int r) {

    if(p < r) {
          
        int j = p-1;
        for(int i = p; i < r; i++) {
            if(a[i].number <= a[r].number) {
                j++;
                if(i != j) {
                    Card temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        Card tmp = a[j+1];
        a[j+1] = a[r];
        a[r] = tmp;
        
        int q = j+1;
        quickSort(a, p, q-1);
        quickSort(a, q+1, r);
    }
}

void marge(Card *a, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    Card L[ n1+1 ], R[ n2+1 ];
    int i, j;
    for(i = 0; i < n1; i++) L[i] = a[ left+i ] ;
    for(j = 0; j < n2; j++) R[j] = a[ mid+j ];
    
    L[n1].number = INT_MAX;
    R[n2].number = INT_MAX;
    
    i = 0;
    j = 0;
    for(int k = left; k < right; k++) {
        if (L[i].number <= R[j].number) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
    }
}

void margeSort(Card *a, int left, int right) {
    if(left+1 < right) {
        int mid = (left + right) /2;
        margeSort(a, left, mid);
        margeSort(a, mid, right);
        marge(a, left, mid, right);
    }
}

