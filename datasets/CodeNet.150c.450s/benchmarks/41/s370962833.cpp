#include<bits/stdc++.h>

// Shrotening
#define fst first
#define snd second
#define pb push_back

// Loop
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define RFOR(i,a,b) for(long i=(a);i>=(b);--i)

#define REP(i,a) FOR(i,0,a)
#define RREP(i,a) RFOR(i,a,0)

#define EACH(i,a) for(auto (i)=(a).begin(),_END=(a).end();i!=_END;++i)
#define REACH(i,a) for(auto (i)=(a).rbegin(),_END=(a).rend();i!=_END;++i)

//Algorithm
#define ALL(a) (a).begin(), a.end()
#define RALL(a) (a).rbegin(), a.rend()
#define EXIST(a,x) ((a).find(x)!=(a).end())
#define SORT(a) sort(ALL(a))

//Setting
#define OPT std::cin.tie(0);std::ios::sync_with_stdio(false);

//debug message
bool debug = true;
#define MSG(s)   if(debug){std::cout << s << std::endl;}
#define DEBUG(x) if(debug){std::cout << "debug(" << #x << "): " << x << std::endl;}

//alias
typedef long long LL;
typedef std::vector<int> VI;
typedef std::vector<long> VL;
typedef std::vector<long long> VLL;
typedef std::pair<int,int> PII;

//Common
typedef long long Weight;
const Weight WEIGHT_INF = std::numeric_limits<Weight>::max()/4;

struct Edge {
    int src, dst;
    Weight weight;
};
bool operator<(const Edge& a, const Edge& b) {
    return (a.weight < b.weight);
};
bool operator>(const Edge& a, const Edge& b) {
    return (a.weight > b.weight);
};
typedef std::vector<Edge> Edges;
typedef std::vector<Edges> Graph;

//Wardhall-Floyd
std::vector< std::vector<Weight> > g;
std::vector< std::vector<int> > trace;
void warshallFloyd() {
    int n = g.size();
    trace.resize(n, std::vector<int>(n, -1));
    REP(k, n) REP(i, n) REP(j, n) {
        if(g[i][k] == WEIGHT_INF || g[k][j] == WEIGHT_INF){
            continue;
        }
        if(g[i][j] > g[i][k] + g[k][j]){
            g[i][j] = g[i][k] + g[k][j];
            trace[i][j] = k;
        }
    }
}

int main(void){
    int V, E;
    std::cin >> V >> E;
    g.resize(V, std::vector<Weight>(V, WEIGHT_INF));
    REP(i, V) g[i][i] = 0;

    int s, d;
    Weight w;
    REP(i, E) {
        std::cin >> s >> d >> w;
        g[s][d] = w;
    }

    warshallFloyd();
    
    bool f = false;
    REP(i, V){
        if(g[i][i] < 0){
            f = true;
        }
    }
    if(f){
        std::cout << "NEGATIVE CYCLE" << std::endl;
    } else {
        REP(i, V) {
            REP(j, V) {
                if(j > 0) std::cout << " ";
                if(g[i][j] == WEIGHT_INF){
                    std::cout << "INF";
                } else {
                    std::cout << g[i][j];
                }
            }
            std::cout << std::endl;
        }
    }
}