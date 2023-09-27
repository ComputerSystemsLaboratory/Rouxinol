#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    static int H[1500000],W[1500000];
    int N=0,M=0;
    while (cin >> N >> M && N!=0){
        int h[1500]={},w[1500]={};
        for (int i=1; i<=N; i++){
            cin >> h[i];
            h[i] += h[i-1];
        }
        for (int i=1; i<=M; i++){
            cin >> w[i];
            w[i] += w[i-1];
        }
        for (int i=0; i<1500000; i++){
            H[i]=0;
            W[i]=0;
        }
        for (int i=0; i<N; i++){
            for (int j=i+1; j<=N; j++){
                H[h[j]-h[i]]+=1;
            }
        }
        for (int i=0; i<M; i++){
            for (int j=i+1; j<=M; j++){
                W[w[j]-w[i]]+=1;
            }
        }
        int ans=0;
        for (int i=0; i<1500000; i++){
            ans+=H[i]*W[i];
        }
        cout << ans << endl;
    }
}