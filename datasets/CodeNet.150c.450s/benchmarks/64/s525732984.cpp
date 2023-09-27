#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insert_values(const vector<int>& vec, vector<int>& ret, int idx, int temp){
    if(idx == int(vec.size())){
        ret.push_back(temp);
        return;
    }
    insert_values(vec, ret, idx+1, temp);
    insert_values(vec, ret, idx+1, temp+vec[idx]);
}

vector<int> valid_values(const vector<int>& vec){
    auto ret = new vector<int>();
    insert_values(vec, *ret, 0, 0);
    sort(ret->begin(), ret->end());
    return *ret;
}

void print_vector(vector<int>& vec){
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << *it << ' ';
    }
    cout << '\n';
}

int main(){
    int n;
    cin >> n;
    auto vec = vector<int>();
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    auto vs = valid_values(vec);
    //print_vector(vs);
    int q;
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        cout << (binary_search(vs.begin(), vs.end(), v) ? "yes" : "no") << endl;
    }
}