#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <cstdio>
#include <string.h>
using namespace std;

#define FOR(i, n) for(int i = 0; i < n; i++)
#define bit(i) static_cast<bitset<8> >(i)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long long, long long>PLL;
typedef queue<int> QI;
typedef priority_queue<int> maxpq;
typedef priority_queue<int, vector<int>, greater<int> > minpq;

struct edge{int to, cost;};

void begin(){cin.tie(0); ios::sync_with_stdio(false);};
int gcd(int a, int b){if(a%b==0){return(b);}else{return(gcd(b,a%b));}};
int lcm(int m, int n){if((0 == m)||(0 == n)){return 0;} return ((m / gcd(m, n)) * n);};
unsigned long long comb(long n, long m){unsigned long long c = 1; m = (n - m < m ? n - m : m);
    for(long ns = n - m + 1, ms = 1; ms <= m; ns ++, ms ++){c *= ns; c /= ms;} return c;};

// ワーシャルフロイド法
void warshallFloyd(int d[100][100], int n){
    for(int k = 0; k < n; ++k)
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                if(d[i][k] != -1 && d[k][j] != -1){
                    if(d[i][j] == -1){
                        d[i][j] = d[i][k] + d[k][j];
                    }else{
                        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                    }
                }
};


// d:隣接行列  n:グラフのサイズ  s:始点  dist:始点からの距離が入る配列
void dijkstra(int d[1000][1000], int n, int s, int dist[1000]){
    FOR(i, n) dist[i] = -1;
    dist[s] = 0;
    priority_queue<PII, vector<PII>, greater<PII> > q;
    q.push(PII(0, s));
    while (!q.empty()) {
        PII p = q.top(); q.pop();
        int i = p.second;
        if(dist[i] < p.first) continue;
        for(int j = 0; j < n; j++){
            if(d[i][j] == -1) continue;
            if(dist[j] == -1){
                dist[j] = dist[i] + d[i][j];
                q.push(PII(dist[j], j));
            }else if(dist[j] > dist[i] + d[i][j]){
                dist[j] = dist[i] + d[i][j];
                q.push(PII(dist[j], j));
            }
        }
    }
};

// 線分の交差判定
bool isCross(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    // 並行な場合
    int m = (x2-x1)*(y4-y3)-(y2-y1)*(x4-x3);
    if(m == 0) return false;
    // 媒介変数の値が0より大きく1以下なら交差する、これは問題の状況によって変わるかも。
    double r =(double)((y4-y3)*(x3-x1)-(x4-x3)*(y3-y1))/m;
    double s =(double)((y2-y1)*(x3-x1)-(x2-x1)*(y3-y1))/m;
    return (0 < r && r <= 1 && 0 < s && s <= 1);
};

// 三角形の内部判定
bool inTriangle(int ax, int ay, int bx, int by, int cx, int cy, int px, int py){
    int abx = bx - ax;
    int aby = by - ay;
    int bcx = cx - bx;
    int bcy = cy - by;
    int cax = ax - cx;
    int cay = ay - cy;
    
    int apx = px - ax;
    int apy = py - ay;
    int bpx = px - bx;
    int bpy = py - by;
    int cpx = px - cx;
    int cpy = py - cy;
    
    int c1 = abx * bpy - aby * bpx;
    int c2 = bcx * cpy - bcy * cpx;
    int c3 = cax * apy - cay * apx;
    return (c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0);
}

bool inTriangle(double ax, double ay, double bx, double by, double cx, double cy, double px, double py){
    double abx = bx - ax;
    double aby = by - ay;
    double bcx = cx - bx;
    double bcy = cy - by;
    double cax = ax - cx;
    double cay = ay - cy;
    
    double apx = px - ax;
    double apy = py - ay;
    double bpx = px - bx;
    double bpy = py - by;
    double cpx = px - cx;
    double cpy = py - cy;
    
    double c1 = abx * bpy - aby * bpx;
    double c2 = bcx * cpy - bcy * cpx;
    double c3 = cax * apy - cay * apx;
    return (c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0);
}

void cp(int a1[], int a2[], int l){FOR(i, l) a2[i] = a1[i];};



/**
 * start
 * @author yoshikyoto
 */
int main(int argc, const char * argv[]){
    begin();
    double ax, ay, bx, by, cx, cy, px, py;
    while(cin >> ax >> ay >> bx >> by >> cx >> cy >> px >> py){
        if(inTriangle(ax, ay, bx, by, cx, cy, px, py)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}