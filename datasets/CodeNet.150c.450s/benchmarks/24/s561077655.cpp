#include <algorithm>
#include <iostream>
#include <utility>
#define int long long
using namespace std;
int N, M;
pair<int,int> D_P[10000];
bool com(pair<int,int> a, pair<int,int> b){ //Pの値で降順ソート
    return a.second > b.second;
}
int solve(){
    sort(D_P,D_P+N,com);
    int r = 0;
    for(int i=0; i<N; i++){
        if(M>D_P[i].first) M -= D_P[i].first;
        else if(M>0){
            r += (D_P[i].first - M)*D_P[i].second;
            M = 0;
        }else{
            r += D_P[i].first * D_P[i].second;
        }
    }
    return r;
}
void get(){
    for(int i=0; i<N; i++){
        cin >> D_P[i].first >> D_P[i].second;
    }
}
signed main(){
    while(cin >> N >> M && N > 0){
        get();
        cout << solve() << endl;
    }
}
