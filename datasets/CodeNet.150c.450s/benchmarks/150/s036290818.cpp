#include <iostream>
using namespace std;

int A[2000001];
int B[2000001];
int C[10001];

int main()
{
    int n, m;
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> A[i];
        ++C[A[i]];
    }
    
    for(int i = 1; i < 10001; ++i) C[i] = C[i] + C[i - 1];
    
    for(int i = n - 1; i >= 0; --i){
        B[C[A[i]] - 1] = A[i];
        --C[A[i]];
    }
    
    for(int i = 0; i < n; ++i){
        if(i != 0) cout << ' ';
        cout << B[i];
    }
    cout << endl;
}