#include <cstdio>
#include <algorithm>
#include <unordered_map>
#include <vector>
int main(){
    int n;
    int m;
    std::scanf("%d", &n);
    std::scanf("%d", &m);

    std::unordered_map<int, int> map;
    for(int i = 0; i < m; ++i){
        int s;
        int t;
        std::scanf("%d", &s);
        std::scanf("%d", &t);
        if(map.find(s) == map.end() && map.find(t) == map.end()){
            int small = std::min(s, t);
            int large = std::max(s, t);
            map.insert(std::make_pair(small, small));
            map.insert(std::make_pair(large, small));
        } else if(map.find(s) == map.end()){
            int key = map[t];
            while(key != map[key]){
                key = map[key];
            }
            if(key <= s){
                map.insert(std::make_pair(s, key));
            } else {
                map[key] = s;
                map.insert(std::make_pair(s, s));
            }
        } else if(map.find(t) == map.end()){
            int key = map[s];
            while(key != map[key]){
                key = map[key];
            }
            if(key <= t){
                map.insert(std::make_pair(t, key));
            } else {
                map[key] = t;
                map.insert(std::make_pair(t, t));
            }
        } else {
            int keys = map[s];
            while(keys != map[keys]){
                keys = map[keys];
            }
            int keyt = map[t];
            while(keyt != map[keyt]){
                keyt = map[keyt];
            }
            int small = std::min(keys, keyt);
            int large = std::max(keys, keyt);
            map[large] = small;
        }
    }

    int q;
    std::scanf("%d", &q);
    for(int i = 0; i < q; ++i){
        int s;
        int t;
        std::scanf("%d", &s);
        std::scanf("%d", &t);
        if(map.find(s) == map.end() || map.find(t) == map.end()){
            printf("no\n");
            continue;
        }
        int keys = map[s];
        while(keys != map[keys]){
            keys = map[keys];
        }
        int keyt = map[t];
        while(keyt != map[keyt]){
            keyt = map[keyt];
        }
        if(keys == keyt){
            std::printf("yes\n");
        } else {
            std::printf("no\n");
        }
    }

    return 0;
}


