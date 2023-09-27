#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define N_MAX 100

typedef struct _v {
    int k;
    struct _v *v;
} Vertex;
Vertex Adj[N_MAX];
int M[N_MAX][N_MAX];


int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
        int k;
        cin >> k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int l;
            cin >> l;
            M[i][l-1] = 1;
//            printf("M[%d][%d] = %d\n", i, l-1, M[i][l-1]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j];
            if (j == n - 1) {
                cout << endl;
            }
            else {
                cout << " ";
            }
        }
    }


    return 0;
}

