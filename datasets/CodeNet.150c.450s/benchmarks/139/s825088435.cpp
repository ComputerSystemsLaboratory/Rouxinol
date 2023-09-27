#include <bits/stdc++.h>
#include <algorithm> 
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18 

int main (){
    int n, m ;
    cin >> n >> m ;
    vector<vector<int>> rd (n) ;
    rep(i, m){
        int a, b ;
        cin >> a >> b ;
        a-- ;
        b-- ;
        rd[a].push_back(b) ;
        rd[b].push_back(a) ;
     }
     queue<int> que ;
     vector<int> p (n, -1) ;
     p[0] = 0 ;
     que.push(0) ;
     while(!que.empty()){
         int t = que.front() ;
         que.pop() ;
         int s = rd[t].size() ;
         rep(i, s){
             int f = rd[t][i] ;
             if(p[f] == -1){
                 que.push(f) ;
                 p[f] = t ;
            }
        }
    } 
    rep(i, n){
        if(p[i] == -1){
            cout << "No" << endl ;
            return 0 ;
        }
    }
    cout << "Yes" << endl ;
    rep(i, n){
        if(i != 0){
            cout << p[i] + 1<< endl ;
        }
    }
    
}