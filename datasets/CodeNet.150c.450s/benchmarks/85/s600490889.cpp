#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const ll inf = 1<<30;

int main(void){cin.tie(0);ios::sync_with_stdio(false);

    int nb; cin >> nb;
    vector<ll> dim(nb);
    int trash;
    for(auto& a:dim) cin >> a >> trash;
    dim.push_back(trash);
    
    vector<vector<ll>> cost( nb, vector<ll>(nb, inf) );
    for (int i=0; i<nb; ++i){
        cost[i][i] = 0;
    }
    
    for (int k=1; k<nb; ++k){
        for (int i=0; i+k<nb; ++i){
            for (int j=0; j<i+k; ++j){
                cost[i][i+k] = min(
                    cost[i][i+k],
                    cost[i][j] + cost[j+1][i+k] + dim[i]*dim[j+1]*dim[i+k+1]);
            }
        }
    }

    cout<<cost[0][nb-1] <<"\n";
} 