#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=1; i <= (int)(n); i++)


int main() {
    int N;
    cin >> N;
  	vector<int> ans(10050);
  	int v;
    rep(x, 105){
        rep(y, 105){
            rep(z, 105){
                v = x*x + y*y + z*z + x*y + y*z + z*x;
                if(v<10050) ans.at(v)++;
                
            }
        }
    }
    
    rep(i, N){
        cout << ans.at(i) << endl;
    }
}
