#include <iostream>
using namespace std;

void solve(int N){
    long long sum = 0;
    int mx = -1;
    int mn = 10001;
    for(int i=0;i<N;i++){
        int a;cin>>a;
        sum += a;
        mx = max(mx,a);
        mn = min(mn,a);
    }
    sum -= mx;
    sum -= mn;

    cout << sum / (N-2) << endl;
}

int main(){
    int N;
    while(cin>>N){
        if(N==0) break;
        solve(N);
    }
}