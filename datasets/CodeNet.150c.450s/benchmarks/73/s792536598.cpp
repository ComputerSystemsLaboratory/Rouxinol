#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<class like_bool> inline void YES(like_bool condition){ if(condition) cout << "YES" << endl; else cout << "NO" << endl; }
template<class like_bool> inline void Yes(like_bool condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }
template<class like_bool> inline void POSS(like_bool condition){ if(condition) cout << "POSSIBLE" << endl; else cout << "IMPOSSIBLE" << endl; }
template<class like_bool> inline void Poss(like_bool condition){ if(condition)cout << "Possible" << endl; else cout << "Impossible" << endl; }
template<class like_bool> inline void First(like_bool condition){ if(condition)cout << "First" << endl; else cout << "Second" << endl; }
template<class like_bool, class output> inline void negative(like_bool condition, output num){ if(condition)cout << -1 << endl; else cout << num << endl; }
int character_count(string text, char character){ int ans = 0; for(int i = 0; i < text.size(); i++){ ans += (text[i] == character); } return ans; }
long power(long base, long exponent, long module){ if(exponent % 2){ return power(base, exponent - 1, module) * base % module; }else if(exponent){ long root_ans = power(base, exponent / 2, module); return root_ans * root_ans % module; }else{ return 1; }}
struct position{ int y, x; }; position move_pattern[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
template<class itr> void array_output(itr start, itr goal){ string ans; for(auto i = start; i != goal; i++){ ans += to_string(*i) + " "; } ans.pop_back(); cout << ans << endl; }
long gcd(long a, long b){ if(a && b){ return gcd(min(a, b), max(a, b) % min(a, b)); }else{ return a; }}
#define mod long(1e9 + 7)
#define bitcount(n) __builtin_popcount(n)

int segment_tree_size = 1;
vector<int> segment_tree;

void plus_item(int point, int num){
    point += segment_tree_size - 1;
    segment_tree[point] += num;
    while(point > 0){
        point = (point - 1) / 2;
        segment_tree[point] += num;
    }
}

int get_sum(int left, int right, int now = 0, int point_left = 0, int point_right = segment_tree_size){
    if(point_right <= left || right <= point_left){
        return 0;
    }else if(left <= point_left && point_right <= right){
        return segment_tree[now];
    }else{
        return get_sum(left, right, now * 2 + 1, point_left, (point_left + point_right) / 2) +
               get_sum(left, right, now * 2 + 2, (point_left + point_right) / 2, point_right);
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    while(n > segment_tree_size){
        segment_tree_size *= 2;
    }
    segment_tree.resize(segment_tree_size * 2 - 1, 0);
    for(int i = 0; i < q; i++){
        int com, x, y;
        cin >> com >> x >> y;
        if(com){
            cout << get_sum(x - 1, y) << endl;
        }else{
            plus_item(x - 1, y);
        }
    }
}


