#include <iostream>
#include <cmath>

using namespace std;
#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

int N,A,B,C,X;
int Y[200];

int solve(){
    int r = X;
    int reel=0;
    for(int i=0; i<=10000; i++,r=(r*A+B)%C){
        if(r==Y[reel]){
            reel++;
        }
        if(reel==N){
            return i;
        }
    }
    return -1;
}

int main(){
    while(cin>>N>>A>>B>>C>>X && C){
        rep(i,N)cin>>Y[i];
        cout << solve() << endl;
    }
}