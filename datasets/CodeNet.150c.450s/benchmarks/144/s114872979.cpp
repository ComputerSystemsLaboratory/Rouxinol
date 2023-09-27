#include<vector>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#define INF 100000000000000
using namespace std;

typedef struct _BLOCK{
    long long n;
    long long x;
}BLOCK;

int main() {
    long long n,m,l;
    cin >> n >> m >> l;
    vector<vector<long long> > A(n, vector<long long>(m, 0));
    vector<vector<long long> > B(m, vector<long long>(l, 0));
    vector<vector<long long> > C(n, vector<long long>(l, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >>A.at(i).at(j);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> B.at(i).at(j);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int k=0; k<m; k++){
                C.at(i).at(j) += A.at(i).at(k)*B.at(k).at(j);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l-1; j++){
            cout << C.at(i).at(j) << " ";
        }
        cout << C.at(i).at(l-1) << endl;
    }
}
