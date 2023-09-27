#include<iostream>

using namespace std;
int N,M,P;

void solve() {
    int sum=0;
    int a;
    for(int i=1;i<=N;i++) {
        int b;
        cin>>b;
        sum+=b;
        if(i==M) a=b;
    }
    sum*=100;
    sum=sum*(100-P)/100;
    if(a==0) sum*=0;
    else sum/=a;
    cout<<sum<<endl;
}

int main() {

    while(cin>>N>>M>>P) {
        if(N+M+P==0) return 0;
        solve();
    }

    return 0;
}