#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[3];
    REP(i,N){
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[0]*a[0]+a[1]*a[1] == a[2]*a[2])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
        

}