#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v) {
  if (!v.empty()) {
    out << '[';
    std::copy(v.begin(), v.end(), std::ostream_iterator<T>(out, ", "));
    out << "\b\b]";
  }
  return out;
}
template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p) {
  out << "[" << p.first << ", " << p.second << "]";
  return out;
}


int main(){
    int n;
    cin >> n;
    vector<int> rs(n);
    for(auto &r : rs){
        cin >> r;
    }

    int maxv = -2e9;
    int minv = rs[0];

    for(int i = 1; i < n; i++){
        maxv = max(maxv, rs[i] - minv);
        minv = min(minv, rs[i]);
    }

    cout << maxv << endl;
    

}