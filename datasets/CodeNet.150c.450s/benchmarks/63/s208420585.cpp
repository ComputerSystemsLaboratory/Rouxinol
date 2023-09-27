#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)
#define mp std::make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const int INF = 1001001001;

// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

const int MAX_N = 200000;

class IntervalHeap{
public:
    IntervalHeap()
        :size(1), next(0){
        for(int i=1;i<=MAX_N;i++){
            data[i][0] = mp(0, 0);
            data[i][1] = mp(0, 0);
        }
    }
    IntervalHeap(int n){
        for(int i=1;i<=(n+1)/2;i++){
            data[i][0] = mp(0, 0);
            data[i][1] = mp(0, 0);
        }
    }
    void insert(P v){
        if(next == 1){
            data[size][1] = v;
            if(data[size][0] > data[size][1]){
                std::swap(data[size][0], data[size][1]);
                heapUp(size, 0);
            }else{
                heapUp(size, 1);
            }
        }else{
            data[size][0] = v;
            data[size][1] = v;
            if(data[size][0] < data[size/2][0]){
                heapUp(size, 0);
                data[size][1] = data[size][0];
            }
            if(data[size][1] > data[size/2][1]){
                heapUp(size, 1);
                data[size][0] = data[size][1];
            }
        }
        
        if(next == 1){++size;}
        next ^= 1;
    }
    void deleteMin(){
        if(isEmpty()){return;}
        next ^= 1;
        
        if(next == 1){
            --size;
        }else{
            data[size][1] = data[size][0];
        }
        data[1][0] = data[size][next];
        heapDown(1, 0);
    }
    void deleteMax(){
        if(isEmpty()){return;}
        if(size == 2 && next == 0){data[1][1] = data[1][0]; size = 1; next = 1; return;}
        next ^= 1;
        
        if(next == 1){
            --size;
        }else{
            data[size][1] = data[size][0];
        }
        data[1][1] = data[size][next];
        heapDown(1, 1);
    }
    P min(){
        if(isEmpty()){} // Error
        return data[1][0];
    }
    P max(){
        if(isEmpty()){} // Error
        return data[1][1];
    }
    bool isEmpty(){
        return size == 1 && next == 0;
    }
private:
    void heapUp(int index, int flag){
        if(index == 1){return;}
        
        if(flag ^ (data[index][flag] < data[index/2][flag])){
            std::swap(data[index][flag], data[index/2][flag]);
            heapUp(index/2, flag);
        }
    }
    void heapDown(int index, int flag){
        int child = index * 2;
        if(child >= size+next){return;}
        
        if(child+1 < size+next && flag ^ (data[child][flag] > data[child+1][flag])){++child;}
        if(flag ^ (data[child][flag] < data[index][flag])){
            std::swap(data[child][flag], data[index][flag]);
            if(data[child][0] > data[child][1]){std::swap(data[child][0], data[child][1]);}
            heapDown(child, flag);
        }
    }
    P data[MAX_N+1][2];
    int size, next;
};

struct Edge{
    int to, cost;
};

IntervalHeap ih;
std::vector<Edge> G[100000];
int d[100000];

int main(){
    int V, E, R;
    std::cin >> V >> E >> R;

    REP(i, E){
        int s, t, cost;
        std::cin >> s >> t >> cost;
        G[s].push_back({t, cost});
    }

    std::fill(d, d+100000, INF);

    ih.insert(mp(0, R));
    d[R] = 0;
    while(!ih.isEmpty()){
        P p = ih.min(); ih.deleteMin();
        int u = p.second, cost = p.first;

        if(d[u] < cost){continue;}
        for(auto& e : G[u]){
            if(d[e.to] > d[u] + e.cost){
                d[e.to] = d[u] + e.cost;
                ih.insert(mp(d[e.to], e.to));
            }
        }
    }

    REP(i, V){
        if(d[i] != INF){
            std::cout << d[i] << std::endl;
        }else{
            std::cout << "INF" << std::endl;
        }
    }
}