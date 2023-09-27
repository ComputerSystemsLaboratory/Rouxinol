#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int num_truck(const vector<int>& w, int P){
    int num = 1;
    int p = P;
    for (int i = 0; i < w.size(); i++) {
        if (w[i] > P) return -1; //??????????????´???
        if (p >= w[i]) {
            p -= w[i];
            continue;
        }
        num++;
        p = P - w[i];
    }
    return num;
}
int calc_P(const vector<int>& w, int k, int min, int max){
// cout << min << " " << max << endl;
    if (min > max) return min;
    int mid = (min + max) / 2;
    int num = num_truck(w, mid);
    if (num > k) return calc_P(w, k, mid + 1, max);
    if (num < k) return calc_P(w, k, min, mid - 1);
    if (num == num_truck(w, mid - 1)) return calc_P(w, k, min, mid - 1);
    return mid;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> w(n);
    for (auto& i : w) cin >> i;
    int min_p = *max_element(w.begin(), w.end());
    int max_p = accumulate(w.begin(), w.end(), 0);
    cout << calc_P(w, k, min_p, max_p) << endl;
    return 0;
}