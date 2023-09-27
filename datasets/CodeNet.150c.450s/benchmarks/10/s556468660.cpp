#include <cstdio>
#include <iostream>
using namespace std;


void print(int a[][10]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            cout<< " " << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n,b,f,r,v = 0;
    cin >> n;
    
    int A[3][10], B[3][10], C[3][10], D[3][10];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            A[i][j] = 0;
            B[i][j] = 0;
            C[i][j] = 0;
            D[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        
        if (b == 1) A[f-1][r-1] += v;
        else if (b == 2) B[f-1][r-1] += v;
        else if (b == 3) C[f-1][r-1] += v;
        else D[f-1][r-1] += v;
    }

    print(A);
    cout << "####################" << endl;
    print(B);
    cout << "####################" << endl;
    print(C);
    cout << "####################" << endl;
    print(D);

    return 0;
}
