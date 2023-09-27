#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> ivec;
typedef vector<string> svec;


int powerint(int a, int b){
    int ret = 1;
    for (int i = 0; i < b; i++) {
        ret = ret * a; 
    }
    return ret;
}
int main()
{
    int n;
    int A[20];
    int q;
    int m[200];

    // input data starts
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", A + i);
    scanf("%d", &q);
    for (int i = 0; i < q; i++) scanf("%d", m + i);
    // input data ends

    // solve starts
    int N = powerint(2,n);
    int CanMake[N];
    
    for (int i = 0; i < N; i++) {
        bool i_bit[n];

        for (int j = 0; j < n; j++) {
            i_bit[j] = ( i / (powerint(2,j) ) % 2 == 1);
        }

        CanMake[i] = 0;

        for (int j = 0; j < n; j++) {
            CanMake[i] += A[j] * i_bit[j];
        } 
    }
    for (int i = 0; i < q; i++){
        bool ans = false;
        for (int j = 0; j < N; j++) {
            if (m[i] == CanMake[j]) ans = true;
        }
        if (ans == false) printf("no\n");
        else printf("yes\n");
    } 
    // solve ends
    return 0;
}