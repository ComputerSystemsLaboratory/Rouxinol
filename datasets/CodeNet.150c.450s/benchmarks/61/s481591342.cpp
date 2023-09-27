#include <bits/stdc++.h>
using namespace std;

int N,A,B,C,X,Y,ans;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> N >> A >> B >> C >> X,N){
        ans=0;
        for (int i=0;i<N;++i){
            if (i!=0) ++ans,X=(A*X+B)%C;
            cin >> Y;
            while(ans<=10000&&X!=Y) ++ans,X=(A*X+B)%C;
        }
        cout << (ans<=10000?ans:-1) << endl;
    }
}
