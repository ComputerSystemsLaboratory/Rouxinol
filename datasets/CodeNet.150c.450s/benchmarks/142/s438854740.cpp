#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    rep(i, N) cin >> A.at(i);
    long long sum1 = 0, sum2 = 0;
  
   rep(j, K){
        sum1 += A.at(K-j-1);
        sum2 += A.at(K-j);
     }
        if(sum1<sum2) cout << "Yes" << endl;
        else cout << "No" << endl;
    
    for(int i=0; i<N-K-1; i++){
    	sum1 = sum1 - A.at(i) + A.at(i+K);
      	sum2 = sum2 -A.at(i+1) + A.at(i+K+1);
      
      	if(sum1<sum2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
