#include <cstdio>
#include <unordered_map>
#define N 100
#define INF 0x7FFFFFFF

void solve(std::unordered_map<int, int> a[N], const int n){
    std::unordered_map<int, int> result;
    result.insert(std::make_pair(0, 0));
    while(result.size() != n){
        std::pair<int, int> newV;
        newV.first = INF;
        newV.second = INF;
        for(auto &x: result){
            for(auto &y: a[x.first]){
                int w = y.second + x.second;
                if(result.find(y.first) == result.end() && newV.second > w){
                    newV.first = y.first;
                    newV.second = w;
                }
            }
        }
        result.insert(newV);
    }
    for(int i = 0; i < n; ++i){
        std::printf("%d %d\n", i, result.find(i)->second);
    }
}

int main(){
    int n;
    std::scanf("%d", &n);
    std::unordered_map<int, int> a[N];
    for(int i = 0; i < n; ++i){
        int id;
        std::scanf("%d", &id);
        int num;
        std::scanf("%d", &num);
        for(int j = 0; j < num; ++j){
            std::pair<int, int> v;
            std::scanf("%d", &v.first);
            std::scanf("%d", &v.second);
            a[i].insert(v);
        }
    }
    solve(a, n);
    return 0;
}

