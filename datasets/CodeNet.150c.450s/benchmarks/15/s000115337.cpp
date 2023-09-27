#include<iostream>
using namespace std;

int main()
{
    int i, j, n, q, S[10001], T[500], C;
    cin >> n;
    for(i = 0; i < n; i++) cin >> S[i];
    cin >> q;
    for(i = 0; i < q; i++) cin >> T[i];

    C = 0;
    for(i = 0; i < q; i++){
        j = 0;
        S[n] = T[i];
        while(S[j] != S[n]) j++;
        if(j < n) C++;
    }
    cout << C << endl;

    return 0;
}