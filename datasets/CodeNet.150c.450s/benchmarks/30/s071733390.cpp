#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

void selectionsort(vector<int> &A){
    for(int i=0; i<A.size(); ++i){
        int minj = i;
        for(int j=i+1; j<A.size(); ++j){
            if( A[minj] > A[j]){
                minj = j;
            }
        }
        if( i!= minj){
            ++cnt;
            swap(A[i],A[minj]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n,0);
    for(auto&& x: A){
        cin >> x;
    }
    selectionsort(A);

    for(int i=0; i<n; ++i){
        if( i!= 0)
            cout << ' ';
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}
