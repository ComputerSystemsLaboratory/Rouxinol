#include <iostream>
#include <vector>
using namespace std;
#define max  2000001
#define vmax  10000

int main(){
    
    int c[vmax+1];
    int n,i,j;
    cin >> n;
    unsigned short *A, *B;
    A = new unsigned short[n + 1];
    B = new unsigned short[n + 1];
    for (i = 0; i<vmax;i++){
        c[i]=0;
    }
    for (i = 1;i<=n; i++){
        cin >> A[i];
        c[A[i]]++;
    }
    for (i = 1;i<=vmax;i++){
        c[i] = c[i -1] + c[i];
    }
    for (j = 0; j<=n;j++){
        B[c[A[j]]] = A[j];
        c[A[j]]--;
    }
    for (i = 1; i<=n ;i++){
        if (i>1) cout << " ";
        cout << B[i];
    }
    cout<< endl;
    return 0;
}