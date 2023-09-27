#include <iostream>
using namespace std;

struct CARDS{
    char c;
    int n,in;
};

int partition(CARDS A[],int p,int r){
    int x = A[r].n;
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(A[j].n<=x){
            i = i+1;
            CARDS s = A[i];
            A[i] = A[j];
            A[j] = s;
        }
    }
    CARDS c = A[i+1];
    A[i+1] = A[r];
    A[r] = c;
    return i+1;
}

void quicksort(CARDS A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}

int main(){
    bool sta(true);
    int n;
    cin >> n;
    CARDS A[n];
    for(int i=0;i<n;i++){
        cin >> A[i].c >> A[i].n;
        A[i].in = i;
    }

    quicksort(A,0,n-1);

    for(int i=1;i<n;i++){
        if(A[i].n==A[i-1].n&&A[i].in<A[i-1].in){
            sta = false;    break;
        }
    }

    if(sta){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }

    for(int i=0;i<n;i++){
        cout << A[i].c << " " << A[i].n << endl;
    }

    return 0;
}
