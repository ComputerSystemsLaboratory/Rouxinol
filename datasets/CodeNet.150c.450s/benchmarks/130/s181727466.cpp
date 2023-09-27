#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
#include<stdio.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m ;j++){
            int x;
            cin >> x;
            a[i][j] = x;

        }
    }
    int b[m];
    for (int j = 0; j < m ;j++){
        int x;
        cin >> x;
        b[j] = x;

    }

    for(int i = 0; i < n; i++){
        int sums = 0;
        for (int j = 0; j < m ;j++){
            sums += a[i][j] * b[j];
        }
        cout << sums << endl;
    }
}
