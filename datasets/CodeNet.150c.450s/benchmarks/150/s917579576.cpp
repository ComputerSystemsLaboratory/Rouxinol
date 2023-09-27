#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>
#include <cstring>
#include <iostream>
#define MAX 2000001
#define VMAX 10000
using namespace std;

int main(){
    unsigned short *A,*B;
    int C[VMAX + 1];
    int n,i,j;
    cin >> n;
    A = static_cast<unsigned short*>(malloc(sizeof(short) * n+1));
    B = static_cast<unsigned short*>(malloc(sizeof(short) * n+1));
    for(i = 0; i <= VMAX; i++)C[i] = 0;
    for(i = 0; i < n; i++){
        cin >> A[i+1];
        C[A[i+1]]++;
    }
    for(i = 1;i <= VMAX; i++)C[i] = C[i] + C[i - 1];
    for(j = 0;j <= n; j++){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    for(i = 1; i <= n; i++){
        if(i > 1)cout << " ";
        cout << B[i];
    }
    cout << endl;
    return 0;
}

