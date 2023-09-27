#include <iostream>
#include <vector>

using namespace std;

void Swap(vector<int>& v, int index1, int index2) {
    int tmp = v[index1];
    v[index1] = v[index2];
    v[index2] = tmp;
}


int main() {
    int w;
    cin >> w;

    vector<int> v(w);
    for(int i = 0; i < v.size(); ++i) {
        v[i] = i + 1;
    }
    
    int n;
    cin >> n;

    for(int i = 0, a, b; i < n; ++i) {
        cin >> a;
        cin.ignore();
        cin >> b;

        Swap(v, a - 1, b - 1);
    }

    for(auto x : v) {
        cout << x << '\n';
    }

    return 0;
}