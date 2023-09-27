#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <bitset>
#include <climits>

using namespace std;
typedef long long ll;
constexpr ll INF = ((ll)INT_MAX) << 30;

int main(){

    ll V, E, A, B, C;
    ll K[128][128];

    cin>>V>>E;
    for(int i=0;i<V;++i){
        for(int j=0;j<V;++j){
            K[i][j]=INF;
        }
        K[i][i]=0;
    }
    for(int i=0;i<E;++i){
        cin>>A>>B>>C;
        K[A][B]=C;
    }
    for(int k=0;k<V;++k){
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if(K[i][k] != INF && K[k][j] != INF){
                    K[i][j] = min(K[i][j], K[i][k] + K[k][j]);
                }
            }
        }
    }
    for(int i=0;i<V;++i){
        if(K[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<V;++i){
        for(int j=0;j<V;++j){
            if(j!=0){
                cout << ' ';
            }
            if(K[i][j] != INF){
                cout << K[i][j];
            }else{
                cout << "INF";
            }
        }
        cout << endl;
    }
    return 0;
}