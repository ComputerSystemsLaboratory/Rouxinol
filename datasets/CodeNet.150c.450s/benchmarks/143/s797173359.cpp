#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int64_t N,A;
    cin >> N;
    map<int64_t,int64_t> data;
    int64_t sum=0;
    for (int i=0;i<N;i++) {
        cin >> A;
        sum+=A;
        data[A]++;
    }
    
    int64_t Q,B,C;
    cin >> Q;
    
    for (int i=0;i<Q;i++) {
        cin >> B>> C;
        sum+=(C-B)*data[B];
        data[C]+=data[B];
        data[B]=0;
        cout << sum << endl;
    }
    
    
}
