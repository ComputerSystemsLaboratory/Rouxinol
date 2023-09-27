#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int S[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0},
    H[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0},
    C[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0},
    D[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int num;
    char suit;
    
    for (int i = 0; i < n; i++) {
        cin >> suit >> num;
        if (suit == 'S')
            S[num] = num;
        else if (suit == 'H')
            H[num] = num;
        else if (suit == 'C')
            C[num] = num;
        else
            D[num] = num;
    }
    for (int i = 1; i < 14; i++)
        if (S[i] == 0) cout << "S " << i << endl;
    for (int i = 1; i < 14; i++)
        if (H[i] == 0) cout << "H " << i << endl;
    for (int i = 1; i < 14; i++)
        if (C[i] == 0) cout << "C " << i << endl;
    for (int i = 1; i < 14; i++)
        if (D[i] == 0) cout << "D " << i << endl;
    
    return 0;
}
