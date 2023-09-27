#include <iostream>
#include <vector>
using namespace std;

int SelctionSort(vector<int>A, int N){
    int sw=0;
    for(int i=0;i<N-1;++i){
        int minj=i;
        for(int j=i;j<N;++j){
          if(A[j]<A[minj]) minj=j;
        }
        swap(A[i], A[minj]);
        if(i!=minj) ++sw;
    }
    for(int i=0;i<N;++i){
        if(i!=N-1) cout << A[i] <<" ";
        else cout << A[i];
    }
    cout << endl;
    return sw;
}

int main() {
    int N; cin >> N; vector<int> A(N);
    for(int i=0;i<N;++i) cin >> A[i];
    int sw = SelctionSort(A, N);
    
    cout << sw << endl;
    return 0;
}