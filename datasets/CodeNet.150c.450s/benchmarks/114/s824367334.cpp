#include <cstdio>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#define N 100
#define INF 0x7FFFFFFF

int prim(std::unordered_map<int, int> a[N], const int n){
    std::unordered_set<int> checked;
    int total = 0;
    checked.insert(0);
    while(checked.size() != n){
        int newId = INF;
        int newWeight = INF;
        for(auto &x: checked){
            for(auto &j: a[x]){
                if(checked.find(j.first) == checked.end() && newWeight > j.second){
                    newId = j.first;
                    newWeight = j.second;
                }
            }
        }
        checked.insert(newId);
        total += newWeight;
    }
    return total;
}

int main(){
    int n;
    std::scanf("%d", &n);
    std::unordered_map<int, int> a[N];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int v;
            std::scanf("%d", &v);
            if(v != -1){
                a[i].insert(std::make_pair(j, v));
            }
        }
    }
    int val = prim(a, n);
    std::printf("%d\n", val);
    return 0;
}

