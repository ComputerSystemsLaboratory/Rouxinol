#include <iostream> 
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <deque>  
#include <iomanip>

using namespace std;

using ll = long long;
#define INF 1e9
#define MOD 1e9 + 7
#define rep(i, n) for(int i = 0; i < n; i++)
#define loop(i, a, n) for(int i = a; i < n; i++)
#define all(in) in.begin(), in.end()
int Sum(int array[], int p, int expect){
    int sum = 0;
    for(int i = 0; i < p; i++){
        if(i != expect) sum += array[i];
    }
    return sum;
}
int main(){
    int n, m;
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0)break;
        int T[n], H[m];
        int sum = 0;
        rep(i, n){

            cin >> T[i];
            sum += T[i];
        }
        rep(i, m){
            cin >> H[i];
            sum += H[i];
        }
        pair<int, int> ans;
        int anssum = INF;
        if(sum % 2  == 1){
            cout << -1 << endl;
            continue;
        }else{
            for(int i = 0; i < n; i++){
                for(int k = 0; k < m; k++){

                    int count = 0;
                    if(Sum(T, n, i) +  H[k] == Sum(H, m, k) + T[i]){
                        count = T[i] + H[k];
                        if(count < anssum){
                            ans.first = T[i], ans.second = H[k];
                            anssum = count;
                        }
                    }
                } 
            }

            if(anssum == INF){
                cout << -1 << endl;
            }else{
                cout << ans.first << " " << ans.second << endl;
            }

        }
    }

    return 0;
}
