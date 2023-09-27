#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int N, M;
int main(){
    while(cin >> N >> M && N+M>0){
        pair<int,int> a[N];
        long long r = 0;
        for (int i = 0; i < N; ++i){
            int D, P;
            cin >> D >> P;
            a[i] = make_pair(P, D);
            r += D * P;
        }
        sort(a, a+N, greater<pair<int,int> >());
        /*for(int i = 0; i < N; ++i){
            cout << a[i].first << " " << a[i].second << endl;
        }*/
        for(int i = 0; i < N; ++i){
            if(a[i].second >= M){
                r -= M * a[i].first;
                M = 0;
            }else{
                r -= a[i].first * a[i].second;
                M -= a[i].second;
            }
            if(M == 0) break;
        }
        cout << r << endl;
    }
}