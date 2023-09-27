#include <bits/stdc++.h>
using namespace std;

int N,M,P,sum,win;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> N >> M >> P,N){
        sum=0;
        for (int i=0;i<N;++i){
            int X; cin >> X;
            if (i==M-1) win=X;
            sum+=100*X;
        }
        sum=sum*(100-P)/100;
        cout << (win?sum/win:0) << endl;
    }
}
