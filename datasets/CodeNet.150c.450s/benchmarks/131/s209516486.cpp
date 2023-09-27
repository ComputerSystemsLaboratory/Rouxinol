#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;
typedef long long ll;

vector<int> int2vec(int n, int l) {
    vector<int> ret;
    while(l > 0) {
        ret.push_back(n % 10);
        n /= 10;
        l--;
    }
    return ret;
}

int vec2int(const vector<int>& v) {
    int d = 1;
    int ret = 0;
    for (int i = 0; i < v.size(); i++) {
        ret += d*v[i];
        d *= 10;
    }
    return ret;
}

int main() {
    while(true) {
        int a, l; cin >> a >> l;
        if (a == 0 && l == 0) break;
        unordered_map<int, int> numbers;
        int i = 0;
        while(true) {
            auto search = numbers.find(a);
            if (search != numbers.end()) {
                cout << search->second << ' ' << a << ' ' << i - search->second << endl;
                break;
            }
            numbers[a] = i;
            vector<int> v = int2vec(a, l);
            sort(v.begin(), v.end());
            int M = vec2int(v);
            reverse(v.begin(), v.end());
            int m = vec2int(v);
            a = M - m;
            i++;
        }
    }
}
