#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n; cin >> n;
    int F[50];
    F[0]=F[1]=1;
    for(int i=2; i<=n; i++) F[i]=F[i-1]+F[i-2];

    cout << F[n] << endl;
}
