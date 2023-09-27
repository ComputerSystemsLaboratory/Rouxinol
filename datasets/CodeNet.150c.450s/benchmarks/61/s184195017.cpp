#include<iostream>

using namespace std;

int N,A,B,C,X;

void solve() {

    int cnt=0;
    for(int i=0;i<N;i++) {
        int y;
        cin>>y;
        if(cnt==-1) continue;
        while(true) {
            if(y==X) {
                X=(A*X+B)%C;
                cnt++;
                break;
            }
            X=(A*X+B)%C;
            cnt++;
            if(10000<cnt) {
                cnt=-1;
                break;
            }
        }

    }
    if(cnt!=-1) cnt--;
    cout<<cnt<<endl;

}

int main() {
    while(cin>>N>>A>>B>>C>>X) {
        if(N+A+B+C+X==0) return 0;
        solve();
    }

    return 0;
}