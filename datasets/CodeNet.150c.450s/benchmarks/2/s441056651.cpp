#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int pivot = a[n-1];
    int i = -1;
    for (int j = 0; j < n-1; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[n-1]);

    REP(j, i+1) cout << a[j] << " ";
    cout << "[" << pivot << "]";
    for(int j = i+2; j<n; j++) cout << " " << a[j];
    cout << endl;


    return 0;
}