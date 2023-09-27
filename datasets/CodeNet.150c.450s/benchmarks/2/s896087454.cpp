#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

int partition(vector<int> &A, int p, int r) {
    int i,j,x;
    x = A[r];
    i = p-1;

    for(j=p; j <= r-1; j++) {
        if(A[j] <= x){
            i = i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int main(void) {
    int n,i,buf;
    vector<int> A;
    
    cin >> n;
    rep(i,n) {
        cin >> buf;
        A.push_back(buf);
    }
    buf = partition(A,0,n-1);
    
    rep(i,n) {
        cout << A[i];
	if(i != n-1 && i != buf) {
	  cout << " ";
	}
        if(i == buf-1) {
            cout << "[";
        } else if(i == buf) {
            cout << "] ";
        }
    }
    cout << endl;
    return 0;
}