#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

vector<tuple<int, char, int> > a;
bool stable = true;

int partition(int l, int r){
    int pivot = get<0>(a[r]);
    int i = l-1;
    for (int j = l; j < r; j++){
        if(get<0>(a[j]) <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void q_sort(int l, int r) {
    if(l < r){
        int q = partition(l, r);
        q_sort(l, q-1);
        q_sort(q+1, r);
    }
    return;
}

int main() {
    int n;
    int num;
    char c;
    cin >> n;
    REP(i, n) {
        cin >> c >> num;
        a.push_back(tie(num, c, i));
    }
    q_sort(0, n-1);
    int i = 0;

    while(i < n){
        int j = 1;
        while (i+j < n && get<0>(a[i]) == get<0>(a[i+j]) ){
            if(get<2>(a[i+j]) < get<2>(a[i]) ){
                stable = false;
                break;
            } else {
                j++;
                continue;
            }
        }
        i += j;
    }

    if(stable)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    REP(i, n) cout << get<1>(a[i]) << " " << get<0>(a[i]) << endl;

    return 0;
}