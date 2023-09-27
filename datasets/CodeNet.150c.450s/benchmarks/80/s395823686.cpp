#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <cmath>
#define ll long long
#define INF 10000000000000000
#define MOD 998244353
using namespace std;


int main(){
    int a=0, b=0;
    for(int i=0;i<4; i++){
        int w;
        cin >> w;
        a+=w;
    }
    for(int i=0;i<4; i++){
        int w;
        cin >> w;
        b+=w;
    }
    cout<<max(a,b)<<endl;
    return 0;
}

