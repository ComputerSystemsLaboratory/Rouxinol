#include <iostream>
using namespace std;

int Y[101];
bool ok[101];
int N,A,B,C,X;

int main() {
    while(cin>>N>>A>>B>>C>>X, N|A|B|C|X) {
        for(int i=0; i<N; ++i) {
            cin>>Y[i];
            ok[i] = false;
        }

        int f = 0;
        int pushed = 0;
        while(f <= 10000) {
            if(Y[pushed] == X) pushed++;
            if(pushed == N) break;
            X = (A*X+B)%C;
            f++;
        }

        if(f > 10000) cout<<-1<<endl;
        else cout<<f<<endl;
    }
}