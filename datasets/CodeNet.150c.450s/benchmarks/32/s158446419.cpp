#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int m,n_min,n_max;
    while(cin>>m>>n_min>>n_max,m){
        vector<int> P(m);
        for(int i=0;i<m;i++){
            cin>>P[i];
        }
        int gap = 0;
        for(int i=n_min;i<=n_max;i++){
            gap = max(gap,P[i-1]-P[i]);
        }
        for(int i=n_max;i>=n_min;i--){
            if(gap == P[i-1]-P[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
}