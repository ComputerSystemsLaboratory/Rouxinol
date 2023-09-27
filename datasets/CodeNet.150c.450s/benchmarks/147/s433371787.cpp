#include <bits/stdc++.h>
using namespace std;
#define FOR(I, A, B) for (int I = (A); I <= (B); ++I)
#define ll long long
#define ar array
const int SIZE = 1<<20;
int an[SIZE];
void solve() {
    FOR(x,1,100)
        FOR(y,1,100)
            FOR(z,1,100){
                an[x*x+y*y+z*z+x*y+y*z+z*x]++;
            }
    int N;
    cin>>N;
    FOR(i,1,N)cout<<(an[i])<<endl;
}
int main() {
    solve();
}
   
