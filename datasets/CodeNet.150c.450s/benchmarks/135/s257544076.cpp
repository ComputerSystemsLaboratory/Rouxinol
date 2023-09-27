#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int N, M, h[1501], w[1501];
    while(cin >> N >> M){
    if(N == 0 && M == 0)    break;
    for(int i=0;i<N;i++) cin >> h[i];
    for(int i=0;i<M;i++) cin >> w[i];
 
    int mxh=accumulate(h,h+N,0); 
    int mxw=accumulate(w,w+M,0); 
    
    vector<int>th(mxh+1,0),tw(mxw+1,0); 
    
    for(int i=0; i<N; i++){
        int sum =0;
        for(int j=i; j<N; j++){
            sum += h[j]; 
            th[sum]++;
        }
    }
    for(int i=0; i<M; i++){
        int sum =0;
        for(int j=i; j<M; j++){
            sum += w[j]; 
            tw[sum]++;
        }
    }
    long long count = 0;
    for(int i=0; i<=min(mxh,mxw); i++){
        count += (long long)th[i]*tw[i];
    }
    cout << count << endl;
    }
    return 0;
}
