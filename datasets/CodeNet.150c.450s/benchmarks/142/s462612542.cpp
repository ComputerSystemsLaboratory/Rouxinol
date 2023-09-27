#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<queue>
#include<cmath>
#include<cstdio>

#define rep(i,n) for(int i=0; i<(n); ++i)
#define pai 3.1415926535897932384

using namespace std;
using ll =long long;
using P = pair<int,int>;

ll A[200001];
ll T[200001];

int main(int argc, const char * argv[]) {
    int N, K;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    for(int i=0; i+K<N; i++){
        if(A[i] < A[i+K]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
        
    return 0;
}
