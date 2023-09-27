#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int * n_input = new int[n];
    char * ch_input = new char[n];
    for(int i = 0; i < n; i++) cin >> ch_input[i] >> n_input[i];
    
    int * n_check_S = new int[13];
    int * n_check_H = new int[13];
    int * n_check_C = new int[13];
    int * n_check_D = new int[13];
    for(int i = 0; i < 13; i++) {
        n_check_S[i] = 0;
        n_check_H[i] = 0;
        n_check_C[i] = 0;
        n_check_D[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(ch_input[i] == 'S') n_check_S[n_input[i]-1] = 1;
        else if(ch_input[i] == 'H') n_check_H[n_input[i]-1] = 1;
        else if(ch_input[i] == 'C') n_check_C[n_input[i]-1] = 1;
        else n_check_D[n_input[i]-1] = 1;
    }

    for(int i = 0; i < 13; i++) {
        if(n_check_S[i] == 0) cout << "S " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++) {
        if(n_check_H[i] == 0) cout << "H " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++) {
        if(n_check_C[i] == 0) cout << "C " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++) {
        if(n_check_D[i] == 0) cout << "D " << i+1 << endl;
    }


    delete[] n_input;
    delete[] ch_input;
    delete[] n_check_S;
    delete[] n_check_H;
    delete[] n_check_C;
    delete[] n_check_D;

    return 0; 
}