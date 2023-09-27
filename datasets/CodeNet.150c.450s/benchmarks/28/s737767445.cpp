#include <iostream>
#include <vector>

using namespace std;
bool isvalid(vector<int>& vec, int k, int p){
    int idx = 0;
    for(int i = 0; i < k; ++i){
        int w = 0;
        while(idx < int(vec.size())){
            if(vec[idx]+w <= p){
                w += vec[idx];
                ++idx;
            } else {
                break;
            }
        }

    }
    if(idx == int(vec.size())){
        return true;
    }
    return false;
}

int lower_bound(vector<int>& vec, int l, int h, int k){
    if(h-l <= 1){
        return h;
    }
    int mid = (h+l)/2;
    if(isvalid(vec, k, mid)){
        return lower_bound(vec, l, mid, k);
    } else {
        return lower_bound(vec, mid, h, k);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    auto vec = vector<int>();
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    cout << lower_bound(vec, 0, 1000000000, k) << '\n';
}