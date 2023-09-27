#include <iostream>
#include <vector>
#include <string>
typedef long long ll;
const int MAXN=100007;
using namespace std;

struct data{
    int num;
    char pic;
    int ind;
};

void BubbleSort(data* B, int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(B[j].num < B[j-1].num){
                swap(B[j], B[j-1]);
            }
        }
    }
}

int partition(data A[], int p, int r){
    int x = A[r].num;
    int i = p-1;

    for(int j=p; j<=r-1; j++){
        if(A[j].num <= x){
            i++;
            swap(A[i], A[j]);
        }
    } 
    swap(A[i+1], A[r]);

    return i+1;
}

void quicksort(data A[], int p, int r){
    if(p < r){
        int q;
        q = partition(A, p, r);
        quicksort(A, p, q-1);
        quicksort(A, q+1, r);
    }    
}

int main(){
    int n; cin >> n;
    
    data A[MAXN];
    for(int i=0; i<n; i++){
        cin >> A[i].pic >> A[i].num;
        A[i].ind = i;
    }
    
    quicksort(A, 0, n-1);

    bool flg = true;
    for(int i=0; i<n; i++){
        if(A[i].num == A[i+1].num && A[i].ind > A[i+1].ind){
            flg = false;
            break;
        }
    }
    if(flg){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    for(int i=0; i<n; i++) printf("%c %d\n", A[i].pic, A[i].num);
    return 0;
}