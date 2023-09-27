#include <iostream>
#include <vector>
#include <utility>
#include <climits>

#define REP(i,n) for(int i=0; i<n; ++i)
#define INF LONG_MAX

using namespace std;

long V, E, r;
vector< vector< pair<long,long> > > to;
vector<long> path;

void bellman_ford(){
    path.resize(V, INF);
    path[r] = 0;

    bool flag = true;
    while(flag){
        flag = false;

        REP(i, V){
            REP(j, to[i].size()){
                long f = i;
                auto t = to[i][j];

                if(path[f] < INF && path[t.first] > path[f] + t.second){
                    path[t.first] = path[f] + t.second;
                    flag = true;
                }
            }
        }
    }
}

int main(void){
    std::cin >> V >> E >> r;

    to.resize(V);

    long s, t, d;
    REP(i,E){
        std::cin >> s >> t >> d;
        to[s].push_back(make_pair(t,d));
    }

    bellman_ford();
    for(auto l : path){
        if(l == INF){
            std::cout << "INF" << std::endl;
        }else{
            std::cout << l << std::endl;
        }
    }
}