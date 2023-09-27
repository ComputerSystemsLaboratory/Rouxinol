#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    vector<int> HH,WW;
    while(cin >>N>>M,N|M){
        int H[N+1]; H[0]=0;
        for(int i=1;i<=N;i++){
            cin >> H[i];
            H[i]+=H[i-1];
        }
        HH.clear();
        for(int i=0;i<=N;i++){
            for(int j=i+1;j<=N;j++){
                HH.push_back(H[j]-H[i]);
            }
        }
        int W[M+1]; W[0]=0;
        for(int i=1;i<=M;i++){
            cin >> W[i];
            W[i]+=W[i-1];
        }
        WW.clear();
        for(int i=0;i<=M;i++){
            for(int j=i+1;j<=M;j++){
                WW.push_back(W[j]-W[i]);
            }
        }
        sort(HH.begin(),HH.end());
        sort(WW.begin(),WW.end());
        int c=0;
        for(auto&h:HH){
            auto lo=lower_bound(WW.begin(),WW.end(),h);
            auto up=upper_bound(WW.begin(),WW.end(),h);
            for(auto i=lo;i!=up;++i){
                if(h==*i)c++;
            }
        }
        cout << c << endl;
    }
}