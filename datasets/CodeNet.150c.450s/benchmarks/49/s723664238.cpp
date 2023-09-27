#include<bits/stdc++.h>
using namespace std;
int N;
int solve() {
    vector<int>a(N);
    for(int i=0;i<N;i++){
    cin >>a.at(i);
    }
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=1;i<N-1;i++) {
        sum +=a.at(i);
    }
    return sum/(N-2);
}
int main(){
    while(cin >> N && N>0) {
        cout << solve() << endl;
    }
}
