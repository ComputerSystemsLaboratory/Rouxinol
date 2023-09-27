#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <set>
#include <math.h>
#include <utility>
#include <stack>
using namespace std;
typedef pair<int,int> P;
const int INF = (int)((unsigned int)-1>>1);


int main(){
    vector<int> prime;
    prime.push_back(2);

    for(int i=3;i<=999999;i+=2){
        bool is_prime = true;
        for(int j=0;j<prime.size();j++){
            if (prime[j]*prime[j] > i) break;
            if (i % prime[j] == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            prime.push_back(i);
        }
    }

    int n;
    while(cin >> n){
        int ans = 0;
        for(int j=0;j<prime.size();j++){
            if (prime[j] > n) break;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}