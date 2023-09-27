#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> S(13),H(13),C(13),D(13);
    char Egara;
    int num;
    for (int i = 0; i<n; i++){
        cin >> Egara >> num;
        if (Egara == 'S'){
            S[num-1] = true;
        }else if (Egara == 'H')
        {
            H[num-1] = true;
        }else if (Egara == 'C')
        {
            C[num-1] = true;
        }
        else
        {
            D[num-1] = true;
        }
    }
    for (int i = 0; i<13; i++){
        if (S[i]==false){
            cout << "S "<< i+1 <<endl;
        }
    }
    for (int i = 0; i<13; i++){
        if (H[i]==false){
            cout << "H "<< i+1 <<endl;
        }
    }
    for (int i = 0; i<13; i++){
        if (C[i]==false){
            cout << "C "<< i+1 <<endl;
        }
    }
    for (int i = 0; i<13; i++){
        if (D[i]==false){
            cout << "D "<< i+1 <<endl;
        }
    }

}
