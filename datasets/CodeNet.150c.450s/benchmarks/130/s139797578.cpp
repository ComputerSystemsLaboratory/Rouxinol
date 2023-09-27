/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int A[1000][1000], B[1000], C[1000];

int main()
{
    int a, b; cin >> a >> b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 1; i <= b; i++) cin >> B[i];
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            C[i] += A[i][j] * B[j];
        }
    }
    for(int i = 1; i <= a; i++) cout << C[i] << '\n';
    
    return 0;
    
}




