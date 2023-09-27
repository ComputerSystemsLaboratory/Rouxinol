#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)
#define all(a) (a).begin(),(a).end()
const int inf = pow(2, 31) - 1;
long long cnt;
void merge(int a[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    int l[n1 + 1], r[n2 + 1];
    rep(i,n1)l[i] = a[i + left];
    rep(i,n2)r[i] = a[i + mid];
    l[n1] = inf;
    r[n2] = inf;
    int i = 0, j = 0 ;
    REP(k,left, right){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        }else {
            cnt += n1 - i;
            a[k] = r[j];
            j++;
        }
    }
}
void merge_sort(int a[], int left, int right){
    int mid = (left + right) / 2;
    if(left + 1 < right){
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i,n)cin >> a[i];
    merge_sort(a, 0, n);
    cout << cnt << endl;
    return 0;
}
