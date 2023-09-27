#include <iostream>
using namespace std;

int main()
{
    int A[4], B[4];
    int S = 0, T = 0;
    for (int i = 0; i < 4; i++){
       cin >> A[i];
       S += A[i];
    }

    for (int j = 0; j < 4; j++){
        cin >> B[j];
        T += B[j];
    }

    int big = max(S, T);

    cout << big << endl;

    return 0;

}