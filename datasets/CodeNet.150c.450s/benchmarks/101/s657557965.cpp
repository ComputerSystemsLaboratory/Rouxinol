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
vector<int> group_id(100001);
vector<vector<int> > groups(100001);
int n;
void dfs(int i ,int c){
    stack<int> s;
    s.push(i);
    group_id[i] = c;
    while(!s.empty()){
        int u = s.top();s.pop();
        for(int l = 0; l < groups[u].size();l++){
            int g = groups[u][l];
            if(group_id[g] == -1){
                group_id[g] = c;
                s.push(g);
            }
        }
    }
}
void makeGroup(){
    int id = 0;
    for(int i = 0; i < n;i++) group_id[i] = -1;
    for(int i = 0; i < n;i++){
        if(group_id[i] == -1){
            dfs(i,id++);
        }
    }
}


int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    int m;

    cin >> n >> m;

    int f,s;
    for(int i = 0; i < m;i++){
        cin >> f >> s;
        groups[f].push_back(s);
        groups[s].push_back(f);
    }

    makeGroup();

    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt;i++){
        cin >> f >> s;
        if(group_id[f] == group_id[s]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    // for(int i = 0; i < n;i++){
    //     cout << i << " : " << group_id[i] << endl;
    // }


    return 0;
}
