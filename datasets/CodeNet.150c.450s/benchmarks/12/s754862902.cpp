#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <functional>
#include <fstream>
#include <cstdlib>
typedef long long ll;
const int MOD = 1e9+7;


#define REP(i, N) for (int i = 0; i < (N); i++)
#define REPP(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define VSORT(c) sort((c).begin(),(c).end())
#define SZ(x) ((int)(x).size())
//vvintを作る　マクロで　 #define vvint(N,M) vector<vector<int>>

using namespace std;

struct node{
    int key;
    int pk,lk,rk;
};


int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<node> nodes(n+1);
    for(int i = 1; i < n+1;i++){
        cin >> nodes[i].key;
    }

    for(int i = 1; i < n+1;i++){
        cout << "node " << i << ": key = " << nodes[i].key << ", ";
        if(i != 1) cout << "parent key = " << nodes[i/2].key << ", ";
        if(i*2 <= n) cout << "left key = " << nodes[i*2].key << ", ";
        if(i*2+1 <= n) cout << "right key = " << nodes[i*2+1].key << ", ";
        cout << endl; 
    }

    

    return 0;
}
