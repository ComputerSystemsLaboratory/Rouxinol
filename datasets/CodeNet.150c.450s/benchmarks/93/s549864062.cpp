#include <iostream>
#include <algorithm>
using namespace std;

struct card {
    char suit;
    int value;
    int id;
    bool operator<(const card &o) {return value<o.value;}
    bool operator<=(const card &o) {return value<=o.value;}
};

int partition(card A[], int p, int r)
{
    card x = A[r];
    int i = p;
    for(int j=p; j<r; j++) {
        if(A[j]<=x) swap(A[i++], A[j]);
    }
    swap(A[i], A[r]);
    return i;
}

void quickSort(card A[], int p, int r)
{
    if(p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

bool isStable(card A[], int n)
{
    for(int i=1; i<n; i++) {
        if(A[i-1].value==A[i].value && A[i-1].id>A[i].id) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    card A[100000];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>A[i].suit>>A[i].value;
        A[i].id=i;
    }
    quickSort(A, 0, n-1);
    if(isStable(A, n)) cout<<"Stable\n";
    else cout<<"Not stable\n";
    for(int i=0; i<n; i++) cout<<A[i].suit<<' '<<A[i].value<<'\n';
    return 0;
}