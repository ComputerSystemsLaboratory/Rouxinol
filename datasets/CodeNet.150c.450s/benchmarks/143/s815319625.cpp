#include <iostream>
using namespace std;
long long int a[100006];
int main () {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    long long int q, sum=0;
    cin >> q;
    for (int i=1; i<=100000; i++) {
            if (a[i]>0) {
                sum+=a[i]*i;
            }
        }
    for (int i=0; i<q; i++) {
        long long int b, c;
        cin >> b >> c;
        sum-=a[b]*b;
        sum+=a[b]*c;
        a[c]+=a[b];
        a[b]=0;
        cout << sum << endl;
    }
}