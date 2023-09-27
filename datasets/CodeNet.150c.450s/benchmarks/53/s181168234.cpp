#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> pll;
const ll inf = 1LL << 60;

/*bool is_prime(int N){ //Nは奇数
bool flag = true; //false: 素数じゃない
    for(int k = 2; k*k <= N; k++){
        if(N % k == 0){
            flag = false; break;
        }
    }
    return flag;
}*/

int main(){
    //cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
    int N;
    cin>>N;
    cout << N << ":";
    vector<bool> is_prime(100001,true);
    vector<int> prime;
    //prime.reserve(100000);
    is_prime[0] = false; is_prime[1] = false;
    int itr = 0;
    for(int i = 2; i <= 100000; i++){
        if(is_prime[i]){
            //int push = i;
            prime.push_back(i);
            itr++;//ここで時間食う？？？？  push_backはアホほど時間食う
            //cout<<prime[itr]<<endl;
            for(int k = 2*i; k<= 100000; k += i){
                is_prime[k] = false;
            }
        }
    }
    //cout << prime.size() << endl;
    /*REP(i,prime.size()){
        cout << prime[i] << endl;
    }*/
    vector<int> ans;
    REP(i,prime.size()){
        while(N % prime[i] == 0){  //ここのループでアホ時間かかってる
            ans.push_back(prime[i]);
            N /= prime[i];
        }
        if(N == 1) break;
    }
    if(N != 1){
        ans.push_back(N);
    }
    
    REP(i,ans.size()){
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;

}
