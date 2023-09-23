#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
#include<limits.h>

using namespace std;
int partition(int A[], int p, int r){
    int x = A[r];
    int i = p-1;
    for(int j=p; j<r; j++){
        if(A[j] <= x){
            i++;  
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i+1], A[r]);
    return i+1;
}

int main(){
    int n;
    cin >> n;
    int *A = new int[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    int k = partition(A, 0, n-1);
    for(int i=0; i<n; i++){
        if(i != 0) cout << " ";
        if(i == k){
            cout << "[" << A[i] << "]";
            continue;
        }
        cout << A[i];
    }
    cout << endl;
}
