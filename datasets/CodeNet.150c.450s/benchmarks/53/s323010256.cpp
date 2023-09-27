#include<bits/stdc++.h>
using namespace std;
using i64 = int_fast64_t;
#define rep(i, N) for(int (i) = 0; (i) < (N); (i)++)
#define all(v) (v).begin(), (v).end()
#define eb emplace_back

int main(){
    int N;
    cin >> N;
    map<int,int> factor;
    int M = N;
    for(int i = 2; i*i <= M; i++){
        while(N % i == 0) {
            factor[i]++;
            N /= i;
        }
    }
    if(N != 1) factor[N]++;

    cout << M << ":";
    for(const pair<int,int>& p : factor){
        for(int i = 0; i < p.second; i++){
            cout << " " << p.first;
        }
    }
    cout << endl;


}
