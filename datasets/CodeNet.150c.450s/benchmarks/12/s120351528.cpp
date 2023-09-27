#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX=100000;

int parent(int i){ return i/2; }
int left(int i){ return 2*i; }
int right(int i){ return 2*i+1; }

int main(void){
    int n; cin >> n;
    int A[n+1];
    for(int i=1; i<=n; i++) cin >> A[i];

    for(int i=1; i<=n; i++){
        printf("node %d: key = %d, ", i, A[i]);
        if(parent(i)>=1) printf("parent key = %d, ", A[parent(i)]);
        if(left(i)<=n) printf("left key = %d, ", A[left(i)]);
        if(right(i)<=n) printf("right key = %d, ", A[right(i)]);
        printf("\n");
    }
}
