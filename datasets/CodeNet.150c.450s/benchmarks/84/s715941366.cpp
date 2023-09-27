#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;
long long int c = 0;


void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int l[n1+1], r[n2+1];
    REP(i, n1) l[i] = a[left + i];
    REP(i, n2) r[i] = a[mid + i];
    l[n1] = INF;
    r[n2] = INF;
    int i = 0;
    int j = 0;
    for(int k = left; k < right ; k++){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        } else {
            c += n1-i;
            a[k] = r[j];
            j++;
        }
    }
    return;
}

void merge_sort(int a[], int left, int right){
    if (left+1 < right){
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    REP(i, n) cin >> a[i];
    merge_sort(a, 0, n);

    cout << c << endl;

    return 0;
}