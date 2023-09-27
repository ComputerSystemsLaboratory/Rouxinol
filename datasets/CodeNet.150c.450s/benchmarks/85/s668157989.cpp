#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define N_MAX 100
#define C_MAX 100
#define R_MAX 100

int p[N_MAX+1];
int m[R_MAX+1][C_MAX+1];


int chain_multiplication(int n)
{
    for (int i = 0; i < n; i++) {
        m[i][i] = 0;
    }
    for (int l = 1; l < n; l++) {
        for (int i = 0; i < n - l; i++) {
            int j = i + l;
            m[i][j] = 100000000;
            for ( int k = i ; k < j; k++) {
                int a = m[i][k] + m[k+1][j] + p[i] * p[k+1] * p[j+1];
//                printf("i %d k %d j %d a %d min %d\n", i, k, j, a, m[i][j]);
                if (m[i][j] > a) {
                    m[i][j] = a;
                }
            }
//            printf("m[%d][%d] = %d\n", i, j, m[i][j]);
        }
    }
    return m[0][n-1];
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        cin >> p[i+1];
    }
    cout << chain_multiplication(n) << endl;
        
    return 0;
}

