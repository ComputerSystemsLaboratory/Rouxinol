#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

void trace(int a[], int n){
    REP(i, n) {
        if (i>0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

void SelectionSort(int a[], int n) {
    int cnt = 0;
    REP(i, n) {
        int min = i;
        FOR(j, i, n) {
            if (a[j] < a[min]) min=j;
        }
        if (i!=min) {
            cnt++;
            swap(a[i], a[min]);
        }
    }
    trace(a, n);
    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;

    int a[100];
    REP(i, n) {
        cin >> a[i];
    }

    SelectionSort(a, n);
    return 0;
}