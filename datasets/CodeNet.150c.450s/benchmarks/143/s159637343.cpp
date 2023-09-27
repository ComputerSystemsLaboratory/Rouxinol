#include <iostream>
#include <vector>
using namespace std;
int A[100001];
int main(){
    int n, q, tmp;
    cin >> n;
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin >> tmp;
        ++A[tmp];
        sum += tmp;
    } 
    cin >> q;
    int b, c;
    for(int ii=0; ii<q; ii++){
        cin >> b >> c;
        sum -= 1LL*A[b]*b;
        sum += 1LL*A[b]*c;
        A[c] += A[b];
        A[b] = 0;
        cout << sum << endl;
    }
    return 0;
}